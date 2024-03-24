#include<stdio.h>
#include<string.h>
int main()
{
	char line[150]="saveetha school of engineering ";
int space,i;
space=0;
for(i=0;line[i]!='\0';i++)
	{
	if(line[i]==' ')
	{
		space++;
		
	}
}
printf("white spaces:%d",space);
return 0;
}
