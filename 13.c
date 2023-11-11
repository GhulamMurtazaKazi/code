This is a C program that prints a pattern of numbers based on the input N. The user inputs an integer N, and the program prints a pattern of numbers with N rows. Each row contains one or more numbers, and the number of numbers in each row and their positions change according to the row number.

 #include<stdio.h>
int main () {
	int N,i=0,j=4;
	printf("enter N:");
	scanf("%d",&N);
	while (N>=0) {
		printf("%d\t",i);
		printf("%d\t",i);
		printf("%d\t",i);
		printf("%d\n",i);
		--N;
		++i;
		if (N>=0) {
			printf("\t%d",i);
			printf("\t%d\n",i);
			--N;
			++i;
			}
				if (N>=0) {
			printf("%d\t\t",i);
			printf("\t%d\n",i);
			--N;
			++i;
		}
	}
	return 0;
} 
