# Write your MySQL query statement below
SELECT user_id,count(follower_id) as followers_count 
FROM followers
GROUP by user_id 
ORDER by user_id;