# Write your MySQL query statement below


# select t.student_id,t.student_name,e.subject_name,(select count(subject_name) from Examinations group by student_id,subject_name) from Students t right join Examinations e on t.student_id=e.student_id ;

SELECT s.student_id, 
       s.student_name, 
       sub.subject_name, 
       COUNT(e.subject_name) AS attended_exams
FROM students s
CROSS JOIN Subjects sub
LEFT JOIN Examinations e
ON s.student_id = e.student_id AND sub.subject_name = e.subject_name
GROUP BY s.student_id, s.student_name, sub.subject_name
ORDER BY s.student_id, sub.subject_name;
