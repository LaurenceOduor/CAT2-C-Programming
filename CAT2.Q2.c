/*
Name:LAURENCE ODUORI OCHIENG 
Reg No:CT101/G/26674/25
Description:C program that request the user to enter hours worked ,hourly wage and print gross pay, taxes, and net pay
*/

#include<stdio.h>
int main(){
	
	float hours,rate,gross_pay,taxes,net_pay;
	
	printf("Enter Hours worked in a week: ");
	scanf("%f",&hours);
	
	printf("Enter hourly wage: ");
	scanf("%f",&rate);
	
	if(hours<=40)
		gross_pay=hours*rate;
	else 
		gross_pay=40*rate+(hours-40)*rate*1.5;
	
	if(gross_pay<=600)
		taxes=0.15*gross_pay;
	else
		taxes=0.15*600+0.20*(gross_pay-600);
	
	net_pay=gross_pay-taxes;
	
	printf("\n Gross Pay : Ksh%.2f",gross_pay);
	printf("\n Taxes: Ksh%.2f",taxes);
	printf("\n Net Pay: Ksh%.2f",net_pay);
	
	return 0;
	

}
