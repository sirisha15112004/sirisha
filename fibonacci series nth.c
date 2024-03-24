#include<stdio.h>
int main(){
	int a=0,b=1,i,pos=8;
	int c=a+b;
	printf("the fibonacci series number of the position %d is: ",pos);
	for(i=2;i<pos;i++)
	{
		a=b;
	b=c;
	c=a+b;
	}
	printf("%d",c);
	return 0;
}