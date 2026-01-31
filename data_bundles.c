//program to display invalid choice;
/*
Description:program to diplay invalid choice
Name:AMOS KIPKURUI
Reg no:BDSA-03-0013/2026
*/
#include<stdio.h>
int main(){
	int choice;
	printf("select data bundle:\n");
	printf("1.100mb @ 50 kes\n");
	printf("2.500mb @ 200 kes\n");
	printf("3.1gb @ 350 kes\n");
	printf("4.2gb @ 600 kes\n");
	printf("enter your choice(1-4):");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("you selected 100mb.cost=50 kes\n");
			break;
		case 2:
			printf("you selected 500mb.cost=200 kes\n");
			break;
		case 3:
			printf("you selected 1gb.cost=350 kes\n");
			break;
		case 4:
			printf("you selected 2gb.cost=600 kes\n");
			break;
		default:
			printf("invalid choice\n");
			
	}
	return 0;
}