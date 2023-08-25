# Write your MySQL query statement below
delete from Person
where id in (select p.id from(
select t1.id
from Person t1
join Person t2
on t1.email = t2.email
where t1.id > t2.id
) p)