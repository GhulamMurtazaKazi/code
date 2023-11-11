This C program checks a number input by the user and prints a message based on the following conditions:
- If the number is positive and even, it prints "1st case".
- If the number is negative and even, it prints "2nd case".
- If the number is positive (and implicitly odd, because the even case is already covered), it prints "3rd case".
- For all other cases (which would only be negative odd numbers), it prints "4th case".

#include<stdio.h>
int main () {
	printf("input a number\n");
	int number;
	scanf("%d",&number);
	if (number>0&&number%2==0) {
		printf("1st case");
	} 
	else if (number<0&&number%2==0) {
		printf("2nd case");
	
	} else if (number>0) {
		printf("3rd case");
	} 
	else { 
	printf("4th case");
	}
	return 0;
}
