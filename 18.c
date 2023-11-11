This is a C program that calculates the position of a zebra from the back of the pack, given its position from the front. The user is asked to input the total number of zebras in the pack (N) and the position of a specific zebra from the leading zebra (i)
#include<stdio.h>
int main () {
	int N,i,j;
	printf("Enter the total number of zebras in the pack\n");
	scanf("%d",&N);
	if (N<1||N>100) {
		printf("The range of N is from 1-100");
		return 0;
	} 
	else {
		printf("Enter the position of the zebra from the leading zebra\n");
		scanf("%d",&i);
		if (i<1||i>N) {
			printf("The range of i is from 1-%d",N);
			return 0;
		}
		else {
			j=N+1-i;
		}
	}
	printf("The position of the zebra from the back is %d",j);
	return 0;
}
