//program to check for student eligibility to final exams;
/*
Description:program to check for students eligibility to final exams;
Name:AMOS KIPKURUI
Reg no:BDSA-03-0013/2026
*/
#include<stdio.h>
int main(){
	float units,total_bill;
	printf("enter water units consumed:");
	scanf("%f",&units);
	
	if(units<=30){
		total_bill=units*20;
	}
	else if(units<=30){
		total_bill=(30*20)+((units-30)*25);
	}
	else{
		total_bill=(30*20)+((units-60)*30);	
		}
		printf("total water bill is :%.2f kes\n",total_bill);
		
}
	
