# Write your MySQL query statement below

select name,b.bonus from Employee left join Bonus b on Employee.empId=b.empId    where b.bonus<1000 or b.bonus is NULL;