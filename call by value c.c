#include<stdio.h>
void swap(int a,int b);
int main(){
	int a=10,b=20;
	printf("before swapping the values in main:a=%d\n b=%d\n",a,b);
	swap(a,b);
	return 0;
}
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("after swapping the values in function:a=%d\n b=%d\n",a,b);
}