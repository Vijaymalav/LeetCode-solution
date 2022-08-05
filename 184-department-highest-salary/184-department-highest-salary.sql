# Write your MySQL query statement below
# select d.name as Department ,e.name as Employee,e.salary as Salary from Employee e  join Department d on d.id=e.departmentId   group by Department;
SELECT D.Name AS Department ,E.Name AS Employee ,E.Salary 
from 
	Employee E,
	Department D 
WHERE E.DepartmentId = D.id 
  AND (DepartmentId,Salary) in 
  (SELECT DepartmentId,max(Salary) as max FROM Employee GROUP BY DepartmentId)