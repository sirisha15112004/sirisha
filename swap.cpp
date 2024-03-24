#include<stdio.h>
int main(){
int a=6;
int b=3;
int c=a;
c=a;
a=b;
b=c;
printf("%d%d",a,b);
return 0;
}
