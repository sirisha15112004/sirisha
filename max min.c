#include<stdio.h>
int main(){
	int a[5]={10,5,3,8,12},i;
	int max=a[0];
	int min=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>max){
			max=a[i];
		}
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("maximum element=%d\n",max);
	printf("minimum element=%d\n",min);
	return 0;
}