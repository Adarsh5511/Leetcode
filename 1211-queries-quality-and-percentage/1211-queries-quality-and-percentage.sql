# Write your MySQL query statement below

select query_name,round(sum(rating/position)/count(query_name),2)  as quality ,round(AVG(rating<3)*100,2) as  poor_query_percentage
from Queries where query_name is not null 
group by query_name;