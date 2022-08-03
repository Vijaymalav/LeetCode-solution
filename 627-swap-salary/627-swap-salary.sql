# Write your MySQL query statement below
# UPDATE salary
#     SET sex  = (CASE WHEN sex = 'm' 
#         THEN  'f' 
#         ELSE 'm' 
#         END)
update salary set sex=if(sex='f','m','f');