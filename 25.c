/*Write a C program that asks user to input 10 integers.
 Program should sort even and odd
numbers and store them in 2 different arrays.*/
#include<stdio.h>
int main () {
	int array[100],even[100],odd[100],size,i=0,j=0,k=0;
	printf("enter the size of array\n");
	scanf("%d",&size);
	printf("enter the elements\n");
	while (i<size) {
		scanf("%d",&array[i]);
		if (array[i]%2==0) {
			even[j]=array[i];
			++j;
		}
		else {
			odd[k]=array[i];
			++k;
		}
		++i;
	}
	i=0;
	if (j>0) {
		printf("the even numebers are\n");
		while (i<j) {
		printf("%d\n",even[i]);
		++i;
	}
	}
	i=0;
		if (k>0) {
		printf("the odd numbers are\n");
		while (i<k) {
		printf("%d\n",odd[i]);
		++i;
	}
	}
	return 0;
	}
