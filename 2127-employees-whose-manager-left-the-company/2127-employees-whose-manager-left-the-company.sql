# Write your MySQL query statement below
SELECT employee_id from employees 
where salary<30000 and 
manager_id NOT in (select employee_id from employees)
order by employee_id