#include<stdio.h>
int main()
{
	int num1,num2,temp;
	printf("\n Enter the first number:");
	scanf("%d",&num1);
	printf("\n Enter the second number:");
	scanf("%d",&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("\n The first number is %d",num1);
	printf("\n The second number is %d",num2);
	return 0;
}
