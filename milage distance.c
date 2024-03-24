#include<stdio.h>
int main(){
int bike_millage,week;
float distance,per_litre,total_cost,t_days_per_week,millage,total;
distance=36.7*2;
bike_millage=15;
per_litre=102.34;
week=6;
t_days_per_week=week*distance;
millage=t_days_per_week/bike_millage;
total=millage*per_litre;
printf("%f is the total cost",total);
return 0;
}