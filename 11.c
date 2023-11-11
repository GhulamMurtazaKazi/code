This is a C program that prints all the even numbers within a given range. The user inputs the start and end of the range. The program then checks each number within the range to see if it’s even. If it is, the program prints the number. The check is done using the modulus operator (%), which gives the remainder of the division of two numbers. In this case, if a number modulo 2 equals 0, that means the number is even.
 #include<stdio.h>
int main () {
	int start,end;
	printf("enter the start and end\n");
	scanf("%d %d",&start,&end);
	printf("the even numbers that lies within the given range are:");
	while (start<=end) {
		if (start%2==0) {
			printf("%d\n",start);
		}
		++start;
	}
	return 0;
} 
