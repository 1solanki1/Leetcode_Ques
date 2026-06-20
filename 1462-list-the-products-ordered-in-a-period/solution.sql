select a.product_name product_name,sum(b.unit) unit from products a 
 join orders b  
on a.product_id=b.product_id 
 
where b.order_date >="2020-02-1" and b.order_date<"2020-03-01"
group by a.product_id,a.product_name 
having sum(b.unit)>=100

