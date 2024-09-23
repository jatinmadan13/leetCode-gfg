# Write your MySQL query statement below
Select firstName, lastName , city,state from Person P
left Join Address A on P.personId=A.personId 
