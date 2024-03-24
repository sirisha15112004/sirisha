#include<stdio.h>
int main(){
int a[5]={5,2,7,9,6},n=5;
int b[n],i;
	for(i=0;i<n;i++)
	{
	b[i]=a[i];
}
printf("the first array is : ");
for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
printf("\n the second array is : ");
for(i=0;i<n;i++)
{
	printf("%d",b[i]);
}
return 0;
}