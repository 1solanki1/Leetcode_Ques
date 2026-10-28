with ranked as (
    select * ,dense_rank() over (partition by departmentid 
    order by salary desc) z
    from employee 
)
select b.name department ,
a.name employee 
,a.salary from ranked  a
inner join department b
on a.departmentid =b.id where z<=3
