# Write your MySQL query statement below


select customer_id,count(case when Transactions.transaction_id is NULL then 1 end) as count_no_trans  from Visits left join Transactions on Visits.visit_id=Transactions.visit_id where Transactions.transaction_id  is null group by  customer_id;

# elect v.customer_id,count(case when t.transaction_id is null then 1 end)as count_no_trans 
# from visits v left join transactions t
# on v.visit_id = t.visit_id
# where t.transaction_id is null
# group by v.customer_id;