//Simple calculator that peforms add,sub,mult,divsionn
#include<stdio.h>
main(){
	int num1,num2;
	
	printf("Enter value of num1:");
	scanf("%d",&num1);
	
	printf("Enter value of num2:");
	scanf("%d",&num2);
	
	int add = num1+num2;
	
	printf("The addition of %d and %d is:%d\n",num1,num2,add);
	int sub = num1-num2;
	
	printf("The subtraction of %d and %d is:%d\n",num1,num2,sub);
	int product = num1*num2;
	
	printf("The multiplication of %d and %d is:%d\n",num1,num2,product);
	float div = num1/num2;
	
	printf("The division of %d and %d is:%f\n",num1,num2,div);	
}
