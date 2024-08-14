# Write your MySQL query statement below
Select MAX(num) AS num from(
    SELECT num 
    FROM Mynumbers
    GROUP by num
    HAVING  count(num)=1)
    as unique_numbers;