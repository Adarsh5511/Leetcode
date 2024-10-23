# Write your MySQL query statement below


select p.product_id,ifnull(round(sum(p.price*u.units)/sum(u.units),2),0) as average_price  from prices p  left  join  UnitsSold u on  p.product_id=u.product_id
and purchase_date between start_date  and end_date group by p.product_id; 