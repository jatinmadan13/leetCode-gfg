# Write your MySQL query statement below
Select e2.name as employee from employee e1
Inner join employee e2 on e1.id=e2.managerId
where e1.salary<e2.salary;