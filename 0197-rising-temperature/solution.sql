# Write your MySQL query statement below


SELECT E2.id
AS Id 
FROM Weather E1, Weather E2

WHERE E2.temperature > E1.temperature AND DATEDIFF(E2.recordDate, E1.recordDate) = 1;

