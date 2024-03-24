#include<stdio.h>
int main(){
	char str[100]="saveeeetha",ch='e';
	int count=0;
	for(int i=0;str[i]!='\0';i++)
	{
	if (ch==str[i])
	count++;
}
		printf("frequency of %c is=%d\n",ch,count);
	return 0;
}