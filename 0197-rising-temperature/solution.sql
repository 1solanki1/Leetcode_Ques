
select  t.id from weather y
cross join weather t
where y.recorddate+1=t.recorddate and y.temperature<t.temperature

;
