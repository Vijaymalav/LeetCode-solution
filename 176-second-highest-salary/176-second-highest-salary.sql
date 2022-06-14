# Write your MySQL query statement below

# select max(salary) as SecondHighestSalary from Employee where salary<(select max(salary) from Employee);

SELECT
    (SELECT DISTINCT
            Salary
        FROM
            Employee
        ORDER BY Salary DESC
        LIMIT 1 OFFSET 1) AS SecondHighestSalary
;
