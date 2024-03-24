#include<stdio.h>
int main(){
	int card=2000;
	float bonus_percentage;
	float bonus_amount;
	if(card==1000){
	bonus_percentage=0.20;
	}else if(card==2000){
	bonus_percentage=0.30;
}	else if(card==3000)	{
	bonus_percentage=0.50;
}else{
bonus_percentage=0.60;
}
bonus_amount=bonus_percentage*card;
float total_value=card+bonus_amount;
printf("Total value of the card=Rs.%2f\n",total_value);
return 0;
}