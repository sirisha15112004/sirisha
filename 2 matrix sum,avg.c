#include<stdio.h>
int main(){
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int i,j,sum,avg;
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		sum+=a[i][j];
		avg=sum/9;
	}
}

		printf("%d\n",sum);
		printf("%d",avg);
return 0;
}