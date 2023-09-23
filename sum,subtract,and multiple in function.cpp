#include<stdio.h>

void sum(void) {
	//first function maked for sum or adittion of two numbers
	int a,b,sum;
	
	printf("Please enter first number:");
	
	scanf("%d",& a);
	
	printf("Please enter second Number:");
	
	scanf("%d",&b);
	
	sum=a+b;
	
	printf("sum=%d\n",sum);
		printf("..........\n\n");
}
void multiple(void){
	//second function maked for multiplaction
	int num1,num2,multpli;
	
	printf("Please enter first Number:");
	
	scanf("%d",&num1);
	
	printf("Please enter second Number:");
	
	scanf("%d",&num2);
	
	multpli=num1*num2;
	
	printf("Multiplication=%d\n",multpli);
	printf("..........\n\n");
}

void subtraction(void)
{
	//third function maked for subtraction
	int a,b,subtract;
	
	printf("Please enter firt number:");
	
	scanf("%d",&a);
	
	printf("Please enter second Number:");
	
	scanf("%d",&b);
	
	subtract=a-b;
	
	printf("subtraction=%d\n",subtract);
		printf("..........\n\n");
}

int main()
{
	//calling to first function
	sum();
	sum();
	
	//calling to second function
	multiple();
	multiple();
	
		//calling to third function
	subtraction();
	subtraction();
}

