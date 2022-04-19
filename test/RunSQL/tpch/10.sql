--//RUN: run-sql %s %S/../../../resources/data/tpch | FileCheck %s
--//CHECK: |                     c_custkey  |                        c_name  |                       revenue  |                     c_acctbal  |                        n_name  |                     c_address  |                       c_phone  |                     c_comment  |
--//CHECK: -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
--//CHECK: |                          8242  |          "Customer#000008242"  |                   622786.7297  |                       6322.09  |                    "ETHIOPIA"  |"P2n4nJhy,UqSo2s43YfSvYJDZ6lk"  |             "15-792-676-1184"  |"slyly regular packages haggle carefully ironic ideas. courts are furiously. furiously unusual theodolites cajole. i"  |
--//CHECK: |                          7714  |          "Customer#000007714"  |                   557400.3053  |                       9799.98  |                        "IRAN"  |             "SnnIGB,SkmnWpX3"  |             "20-922-418-6024"  |"arhorses according to the blithely express re"  |
--//CHECK: |                         11032  |          "Customer#000011032"  |                   512500.9641  |                       8496.93  |              "UNITED KINGDOM"  |"WIKHC7K3Cn7156iNOyfVG3cZ7YqkgsR,Ly"  |             "33-102-772-3533"  |"posits-- furiously ironic accounts are again"  |
--//CHECK: |                          2455  |          "Customer#000002455"  |                   481592.4053  |                       2070.99  |                     "GERMANY"  |  "RVn1ZSRtLqPlJLIZxvpmsbgC02"  |             "17-946-225-9977"  |"al asymptotes. finally ironic accounts cajole furiously. permanently unusual theodolites aro"  |
--//CHECK: |                         12106  |          "Customer#000012106"  |                   479414.2133  |                       5342.11  |               "UNITED STATES"  |                "wth3twOmu6vy"  |             "34-905-346-4472"  |"ly after the blithely regular foxes. accounts haggle carefully alongside of the blithely even ideas."  |
--//CHECK: |                          8530  |          "Customer#000008530"  |                   457855.9467  |                       9734.95  |                     "MOROCCO"  |"GMQyte94oDM7eD7exnkj 4hH9yq3"  |             "25-736-932-5850"  |"slyly asymptotes. quickly final deposits in"  |
--//CHECK: |                         13984  |          "Customer#000013984"  |                   446316.5104  |                       3482.28  |                        "IRAN"  |               "qZXwuapCHvxbX"  |             "20-981-264-2952"  |"y unusual courts could wake furiously"  |
--//CHECK: |                          1966  |          "Customer#000001966"  |                   444059.0382  |                       1937.72  |                     "ALGERIA"  |"jPv1 UHra5JLALR5Isci5u0636RoAu7t vH"  |             "10-973-269-8886"  |"the blithely even accounts. final deposits cajole around the blithely final packages. "  |
--//CHECK: |                         11026  |          "Customer#000011026"  |                   417913.4142  |                       7738.76  |                     "ALGERIA"  |          "XorIktoJOAEJkpNNMx"  |             "10-184-163-4632"  |"ly even dolphins eat along the blithely even instructions. express attainments cajole slyly. busy dolphins in"  |
--//CHECK: |                          8501  |          "Customer#000008501"  |                   412797.5100  |                       6906.70  |                   "ARGENTINA"  |          "776af4rOa mZ66hczs"  |             "11-317-552-5840"  |"y final deposits after the fluffily even accounts are slyly final, regular"  |
--//CHECK: |                          1565  |          "Customer#000001565"  |                   412506.0062  |                       1820.03  |                      "BRAZIL"  |"EWQO5Ck,nMuHVQimqL8dLrixRP6QKveXcz9QgorW"  |             "12-402-178-2007"  |"ously regular accounts wake slyly ironic idea"  |
--//CHECK: |                         14398  |          "Customer#000014398"  |                   408575.3600  |                       -602.24  |               "UNITED STATES"  |"GWRCgIPHajtU21vICVvbJJerFu2cUk"  |             "34-814-111-5424"  |"s. blithely even accounts cajole blithely. even foxes doubt-- "  |
--//CHECK: |                          1465  |          "Customer#000001465"  |                   405055.3457  |                       9365.93  |                       "INDIA"  |    "tDRaTC7UgFbBX7VF6cVXYQA0"  |             "18-807-487-1074"  |"s lose blithely ironic, regular packages. regular, final foxes haggle c"  |
--//CHECK: |                         12595  |          "Customer#000012595"  |                   401402.2391  |                         -6.92  |                       "INDIA"  |     "LmeaX5cR,w9NqKugl yRm98"  |             "18-186-132-3352"  |"o the busy accounts. blithely special gifts maintain a"  |
--//CHECK: |                           961  |          "Customer#000000961"  |                   401198.1737  |                       6963.68  |                       "JAPAN"  |"5,81YDLFuRR47KKzv8GXdmi3zyP37PlPn"  |             "22-989-463-6089"  |"e final requests: busily final accounts believe a"  |
--//CHECK: |                         14299  |          "Customer#000014299"  |                   400968.3751  |                       6595.97  |                      "RUSSIA"  |           "7lFczTya0iM1bhEWT"  |             "32-156-618-1224"  |" carefully regular requests. quickly ironic accounts against the ru"  |
--//CHECK: |                           623  |          "Customer#000000623"  |                   399883.4257  |                       7887.60  |                   "INDONESIA"  |"HXiFb9oWlgqZXrJPUCEJ6zZIPxAM4m6"  |             "19-113-202-7085"  |" requests. dolphins above the busily regular dependencies cajole after"  |
--//CHECK: |                          9151  |          "Customer#000009151"  |                   396562.0295  |                       5691.95  |                        "IRAQ"  |  "7gIdRdaxB91EVdyx8DyPjShpMD"  |             "21-834-147-4906"  |"ajole fluffily. furiously regular accounts are special, silent account"  |
--//CHECK: |                         14819  |          "Customer#000014819"  |                   396271.1036  |                       7308.39  |                      "FRANCE"  |"w8StIbymUXmLCcUag6sx6LUIp8E3pA,Ux"  |             "16-769-398-7926"  |"ss, final asymptotes use furiously slyly ironic dependencies. special, express dugouts according to the dep"  |
--//CHECK: |                         13478  |          "Customer#000013478"  |                   395513.1358  |                       -778.11  |                       "KENYA"  |"9VIsvIeZrJpC6OOdYheMC2vdtq8Ai0Rt"  |             "24-983-202-8240"  |"r theodolites. slyly unusual pinto beans sleep fluffily against the asymptotes. quickly r"  |
-- TPC-H Query 10

select
        c_custkey,
        c_name,
        sum(l_extendedprice * (1 - l_discount)) as revenue,
        c_acctbal,
        n_name,
        c_address,
        c_phone,
        c_comment
from
        customer,
        orders,
        lineitem,
        nation
where
        c_custkey = o_custkey
        and l_orderkey = o_orderkey
        and o_orderdate >= date '1993-10-01'
        and o_orderdate < date '1994-01-01'
        and l_returnflag = 'R'
        and c_nationkey = n_nationkey
group by
        c_custkey,
        c_name,
        c_acctbal,
        c_phone,
        n_name,
        c_address,
        c_comment
order by
        revenue desc
limit 20

