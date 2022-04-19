--//RUN: run-sql %s %S/../../../resources/data/tpch | FileCheck %s
--//CHECK: |                     s_suppkey  |                        s_name  |                     s_address  |                       s_phone  |                 total_revenue  |
--//CHECK: ----------------------------------------------------------------------------------------------------------------------------------------------------------------------
--//CHECK: |                           677  |          "Supplier#000000677"  |       "8mhrffG7D2WJBSQbOGstQ"  |             "23-290-639-3315"  |                  1614410.2928  |
-- TPC-H Query 15

with revenue as (
	select
		l_suppkey as supplier_no,
		sum(l_extendedprice * (1 - l_discount)) as total_revenue
	from
		lineitem
	where
		l_shipdate >= date '1996-01-01'
		and l_shipdate < date '1996-04-01'
	group by
		l_suppkey)
select
	s_suppkey,
	s_name,
	s_address,
	s_phone,
	total_revenue
from
	supplier,
	revenue
where
	s_suppkey = supplier_no
	and total_revenue = (
		select
			max(total_revenue)
		from
			revenue
	)
order by
	s_suppkey

