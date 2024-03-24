#include<stdio.h>
int main(){
	int i,n,c=0;
	printf("enter a number 15");
	for (i=1;i<=n;i++)
	{
		if(n%i==0)
		c=c+1;
	}
	if (c==2)
	printf("the number is prime");
	else
	printf("the number is composite");
	return 0;
}