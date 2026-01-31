//program to check for eligibility for final exams;
/*
Description:program to check for eligibility for final exams
Name:AMOS KIPKURUI
Reg no:BDSA-03-0013/2026
*/
#include<stdio.h>
int main(){
	float attendance,marks;
	printf("enter the attendance percentage:");
	scanf("%f",&attendance);
	printf("enter average marks:");
	scanf("%f",&marks);
	if(attendance>=75 && marks >=40){
		printf("eligible for the final exams");
	}
	else{
		printf("not eligible");
	}
	return 0;
}                                      