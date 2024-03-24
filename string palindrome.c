#include<stdio.h>
#include<string.h>
int main()
{
	char string1[20]="madam";
	int i,length;
	int flag=0;
	length=strlen(string1);
	for(i=0;i<length/2;i++)
	{
		if(string1[i]!=string1[length-i-1])
{
	flag=1;
	break;
	
	}
		}
		if(flag)
		{
			printf("%s is not a palindrome\n",string1);
			
		}
		else
		{
			printf("%s is a palindrome",string1);
			
		}
		return 0;
	
}