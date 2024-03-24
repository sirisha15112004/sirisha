#include<stdio.h>
int main(){
	int num=124,original_num,remainder,reverse=0;
	original_num=num;
	while(original_num!=0)
	{
		remainder=num%10;
		reverse=reverse*10+remainder;
		original_num/=10;
}
if(reverse==num){
printf("%d is a palindrome",num);
}
else
{
printf("%d is not a palindrome",num);
}
return 0;
}