# Write your MySQL query statement below
Select product_id,year as first_year,quantity, price 
from sales 
where (product_id,year) IN(select product_id,MIN(year)
from sales group by product_id);