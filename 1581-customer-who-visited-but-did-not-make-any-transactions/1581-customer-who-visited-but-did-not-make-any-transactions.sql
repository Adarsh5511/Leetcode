# Write your MySQL query statement below


SELECT T0.customer_id, COUNT(T0.customer_id) as count_no_trans
FROM Visits T0
WHERE T0.visit_id NOT IN (SELECT A.visit_id FROM Transactions A)
GROUP BY T0.customer_id



