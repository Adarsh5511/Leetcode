# Write your MySQL query statement below

# select round((sum(if (lastlogin=firstlogin+1,1,0))/count(distinct player_id )),2)  as fraction
# from 
# (select player_id,device_id,min(event_date) as firstlogin,max(event_date) as lastlogin,games_played from
# activity group by player_id) as new_table;

SELECT 
    ROUND(SUM(IF(a.event_date = DATE_ADD(first_login.first_login, INTERVAL 1 DAY), 1, 0)) / COUNT(DISTINCT first_login.player_id), 2) AS fraction
FROM 
    (SELECT 
        player_id, 
        MIN(event_date) AS first_login
     FROM 
        Activity
     GROUP BY 
        player_id) AS first_login
JOIN 
    Activity a ON first_login.player_id = a.player_id;


