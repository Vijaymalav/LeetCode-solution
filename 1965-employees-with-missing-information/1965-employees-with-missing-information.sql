# Write your MySQL query statement below
# select employee_id from Employees join Salaries on Employees.employee_id =Salaries.employee_id  where name is null or salary is null;

SELECT employee_id 
FROM employees
WHERE employee_id NOT IN (SELECT employee_id FROM salaries)
UNION
SELECT employee_id 
FROM salaries
WHERE employee_id NOT IN (SELECT employee_id FROM employees)
ORDER BY employee_id;