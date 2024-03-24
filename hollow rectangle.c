#include<stdio.h>
int main(){
	int a=5,b=8,i,j;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
	if(i>0&&i<a-1&&j>0&&j<b-1)
	{
		printf(" ");
	}
	else
	{
		printf(" *");
	}}
	printf(" \n");
}
return 0;
}
