# Write your MySQL query statement below


# select round(sum(if min_order=min_pref,1,0)*100/count(min_order),2) as immediate_percentage 
# from 
# (select 
# delivery_id , customer_id , min(order_date) as min_order , min(customer_pref_delivery_date) as min_pref from delivery
# group by customer_id) as new_table;

SELECT 
    ROUND(SUM(IF(min_order = min_pref, 1, 0)) * 100.0 / COUNT(min_order), 2) AS immediate_percentage
FROM 
    (SELECT 
        delivery_id, 
        customer_id, 
        MIN(order_date) AS min_order, 
        MIN(customer_pref_delivery_date) AS min_pref 
     FROM delivery
     GROUP BY customer_id) AS new_table;
