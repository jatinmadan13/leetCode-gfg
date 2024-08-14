# Write your MySQL query statement below
SELECT mgr.employee_id,mgr.name,count(emp.employee_id) as reports_count, Round(AVG(emp.age)) as average_age FROM employees emp join employees mgr
on emp.reports_to=mgr.employee_id
group by employee_id 
order by employee_id;