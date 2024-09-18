# Write your MySQL query statement below
Select user_id,CONCAT(upper(substr(name,1,1)),LOWER(substr(name,2,length(name)))) as name
from Users
ORDER BY user_id;