#include<stdio.h>
int main(){
int a[2][2]={1,2,3,4};
int transpose[2][2]={0,0,0,0};
int i,j;
for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		transpose[j][i]=a[i][j];
	}
}
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d ",transpose[i][j]);
	}
	printf("\n");
}
return 0;
}