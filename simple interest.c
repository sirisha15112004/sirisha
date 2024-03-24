#include<stdio.h>
float calculatesi(float principal,float time,char customertype);
int main(){
	float principal=10000,rate,time=1,si;
	char customertype='y';
	si=calculatesi (principal,time,customertype);
	printf("the simple interest is %.2f\n",si);
	return 0;
}
float calculatesi(float principal,float time,char customertype)
{
	float rate;
	if(customertype=='Y'||customertype=='y')
	{
		rate=12.0;
	}
	else
	{
		rate=10.0;
	}
	return (principal *rate *time)/100;
}