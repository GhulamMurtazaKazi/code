This is a C program that prints all the perfect squares within a given range and counts how many there are. The user inputs the start and end of the range. The program then checks each number within the range to see if it’s a perfect square. If it is, the program prints the number and increments a counter.
#include<stdio.h>
int main () {
	int start,end,i=1,count=0;
	printf("enter the range start and end\n");
	scanf("%d %d",&start,&end);
	printf("the perfect squares that lies within the given range are\n");
	while(start<=end) {
		while (i<=(start/2)) { 
		if ((i*i)==start) {
			printf("%d\n",start);
			++count;
			break;
		}
		++i;
		}
		i=1;
		++start;
	}
	printf("the number of perfect squares that lies within the given range is %d",count);
    return 0;
}
