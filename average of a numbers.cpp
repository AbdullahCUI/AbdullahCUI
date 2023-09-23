#include<stdio.h>

int main() {
	
	int num1,num2,num3;
	int sum;
	
	double average;
	
	printf("Please enter num1:");
	
	scanf("%i", &num1);
	
	printf("Please enter num2:");
	
	scanf("%i", &num2);
	
	printf("Please enter num3:");
	
	scanf("%i", &num3);
	
	sum=num1+num2+num3;
	
	average=sum/3;
	
	printf("%g",average);
	
	return 0;
}