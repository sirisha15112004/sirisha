#include<stdio.h>
int main(){
	int n=5,i,j,s,c=1;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		int c=1;
		for(s=0;s<=i;s++)
		{
			printf("%d",c);
		}
		c=c*(i-s)/s;
		
			printf("\n");
	}
		return 0;
	
}