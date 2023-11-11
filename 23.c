Being a nonconformist, Volodya is displeased with the current state of things, particularly with
the order of natural numbers (natural number is positive integer number). He is determined to
rearrange them. But there are too many natural numbers, so Volodya decided to start with the
first n. He writes down the following sequence of numbers: firstly all odd integers from 1 to n (in
ascending order), then all even integers from 1 to n (also in ascending order). Help our hero to
find out which number will stand at the position number k.
Input
The only line of input contains integers n and k (1 ≤ k ≤ n ≤ 1012).
Output
Print the number that will stand at the position number k after Volodya's manipulations.

 #include<stdio.h>
int main() {
	int numbers[10000],i=0,j=1,n,k;
	printf("enter n\n");
	scanf("%d",&n);
		printf("enter k\n");
	scanf("%d",&k);
	while (i<n) {
		if (j%2!=0) {
		numbers[i]=j;
		++j;
		++i;
	}
	else 
	++j;
	if (j>n) {
		j=2;
		while (i<n) {
			if (j%2==0) {
			numbers[i]=j;
			++j;
			++i;
		}
		else 
		++j;
	}
	} 
	}
	printf("%d",numbers[k-1]);
	return 0;
} 
