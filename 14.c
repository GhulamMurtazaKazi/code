This is a C program that calculates the sum, count, minimum, and maximum of a series of non-negative numbers entered by the user. The user is prompted to enter a number in each iteration of a while loop. The loop continues as long as the entered number is non-negative.
#include<stdio.h>
int main () {
	float number=0,count=0,minimum=0,maximum=0,sum=0,flag=0;
	while (number>=0) {
		printf("enter the number");
		scanf("%f",&number);
		if (flag==0) {
			minimum=number;
			flag=1;
		}
		if (number>=0) {
		if (number>maximum) {
			maximum=number;
		}
		if (number<minimum) {
			minimum=number;
		}
		sum +=number;
	}
	++count;
	}
	printf("the sum of all the numbers entered is %f\n",sum);
	printf("the number of iterations are %f\n",count);
	printf("the minimum number entered is %f\n",minimum);
		printf("the maximum number entered is %f\n",maximum);
	return 0;
}  
