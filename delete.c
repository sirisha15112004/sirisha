#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int pos=2,i,size=5;
	for(i=pos-1;i<5;i++)
	a[i]=a[i+1];
	size--;
	for(i=0;i<size;i++)
	printf("%d",a[i]);
	return 0;
}