# Write your MySQL query statement below
SELECT max(SALARY) as SecondHighestSalary from Employee 
where salary< (SELECT max(salary) from employee)