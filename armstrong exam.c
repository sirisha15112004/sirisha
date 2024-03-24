#include<stdio.h>
int main(){
	int num=246,original_num,remainder,result;
	original_num=num;
	while(original_num!=0);
	{
		remainder=original_num%10;
		result=remainder*remainder*remainder;
		original_num=10;
	}
	if(result==num)
	{
		printf("%d is a armstrong",num);
	}
	else
	{
		printf("%d is not a armstrong",num);
	}
	return 0;
	
}