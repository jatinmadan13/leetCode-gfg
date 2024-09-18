# Write your MySQL query statement below
SELECT sell_date,count(distinct product) as num_sold , 
group_concat(distinct product order by product asc separator',') as products
from activities 
group by sell_date order by sell_date asc;