//program to prompt a user to enter the height,bank balance and phone number
/*
Description:program to prompt a user to enter the height,bank balance and phone number
Name:AMOS KIPKURUI
Reg no:BDSA-03-0013/2026
*/
#include<stdio.h>
//main function
int main(){
	int height;
	int phone_number;
	int bank_balance;
	char K[3];
	char B[3];
	printf("please enter your height(cm):\n");
	scanf("%d",&height);
   	printf("please enter your bank balance:\n");
	scanf("%d",&bank_balance);
	printf("Curency ");
	scanf("%s",B);
	printf("please enter your phone number:\n");
	scanf("%d",&phone_number);
	printf("\nthe height is %d%s \n Bank_balance is %d%s \n Phone Number %d",height,K,bank_balance,B,phone_number);
}                   