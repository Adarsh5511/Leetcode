# Write your MySQL query statement below


# SELECT r.contest_id,
#        ROUND((COUNT(DISTINCT r.user_id) / (SELECT COUNT(DISTINCT user_id) FROM Users)) * 100, 2) AS percentage
# FROM Register r
# GROUP BY r.contest_id
# ORDER BY percentage DESC, r.contest_id ASC;

SELECT r.contest_id,
        ROUND((COUNT(DISTINCT r.user_id) / (SELECT COUNT(user_id) FROM Users)) * 100, 2) AS percentage
FROM Register r
JOIN Users u ON u.user_id = r.user_id
GROUP BY r.contest_id
ORDER BY percentage DESC, r.contest_id ASC;

