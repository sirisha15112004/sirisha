#include<stdio.h>
int main(){
int n1=0,n2=1,n=4,i;
int nt=n1+n2;
printf("%d %d",n1,n2);
for(i=1;i<=n;i++)
{
	printf("%d",nt);
n1=n2;
n2=nt;
nt=n1+n2;
}
return 0;
}

