#include<stdio.h>
int binarytodecimal(long long binarynumber)
{
int decimalnumber=0,base=1,remainder;
while(binarynumber!=0)
{
	remainder=binarynumber%10;
	decimalnumber+=remainder*base;
	base*=2;
	binarynumber/=10;
}
return decimalnumber;
}
int main(){
	long long binarynumber=101010;
	int decimalnumber=binarytodecimal(binarynumber);
	printf("decimal number of %llb is %d\n",decimalnumber);
}


