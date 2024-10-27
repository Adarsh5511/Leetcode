# Write your MySQL query statement below

select product_id, year as first_year, quantity, price
from
(select *, rank() over (partition by product_id order by year) as rnk from sales
) t
where rnk=1;


