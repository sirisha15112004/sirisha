#include<stdio.h>
int main(){
	int a=5,b=6,c=8;
	if((a>b)&&(a>c))
	printf("%d is the largest",a);
	else if ((b>a)&&(b>c))
	printf("%d is the largest",b);
	else
	printf("%d is the largest",c);
	return 0;
}