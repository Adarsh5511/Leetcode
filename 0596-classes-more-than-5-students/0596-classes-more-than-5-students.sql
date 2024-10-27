# Write your MySQL query statement below


# select class from courses group by class having count(distinct class)>=5;

SELECT class
FROM Courses
GROUP BY class
HAVING COUNT(DISTINCT student) >= 5;
