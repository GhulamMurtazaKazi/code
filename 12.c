This is a C program that checks if two numbers are mutually perfect. Two numbers are mutually perfect if the sum of the divisors of the first number equals the second number, and the sum of the divisors of the second number equals the first number. The user inputs two integers, and the program calculates the sum of the divisors for each number and checks if they are mutually perfect.
#include<stdio.h>
int main () {
	int A,B,i=1,sum=0;
	printf("enter two integers\n");
	scanf("%d %d",&A,&B);
	while (i<A) {
		if (A%i==0) {
			sum +=i;
		}
		++i;
	}
	if (sum==B) {
		printf("the sum of the divisors of %d equals %d\n",A,B);
		i=1;
		sum=0;
		while (i<B) {
			if (B%i==0) {
				sum +=i;
			}
			++i;
		}
		if (sum==A) {
				printf("the sum of the divisors of %d equals %d\n ",B,A);
			printf("hence the numbers %d and %d are mutually perfect",A,B);
		} else {
				printf("But the sum of the divisors of %d doesnot equals %d\n",B,A);
				printf("the numbers %d and %d arenot mutually perfect",A,B);
			
		}
	}
	else {
					printf("the sum of the divisors of %d doesnot equals %d\n",A,B);
				printf("hence the numbers %d and %d arenot mutually perfect",A,B);
			
		}
	return 0;
	}
