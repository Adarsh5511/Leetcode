# Write your MySQL query statement below


select s.user_id,case when count(case when c.action='confirmed ' then 1 end)=0 then 0 
else round((count(case when c.action='confirmed' then 1 end)/count(c.user_id)),2) end as confirmation_rate  
from Signups s   left join Confirmations  c
on  s.user_id=c.user_id group by s.user_id;