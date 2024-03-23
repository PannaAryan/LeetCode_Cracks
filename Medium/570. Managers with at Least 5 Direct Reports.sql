select e.name
from Employee e, Employee m
where e.id = m.managerId
group by e.id
Having count(e.id) >= 5