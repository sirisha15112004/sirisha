#include<stdio.h>
int main(){
int i,num1=10,num2=15,count=0,sum=0;
printf("enter the value of num1 and num2\n");
printf("integers divisible by 5 are \n");
for (i=num1;i<num2;i++)
{
	if (i%5==0)
	{
		printf("%3d,",i);
		count++;
		sum=sum+i;
	}
}
printf("\n number of integers divisible by 5 between %d and %d=%d\n",num1,num2,count);
printf("sum of all integers are divisible by 5 =%d\n",sum);
return 0;
}