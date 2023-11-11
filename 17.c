This is a C program that calculates the frequency of each number in an array. The user inputs the size of the array and then each number in the array. The program then checks each number in the array and counts how many times it appears.
#include <stdio.h>

int main() {
    int i=0,j=1,size,count=1,x;
    float numbers[1000];
    printf("enter the size of array\n");
    scanf("%d",&size);
    while (i<size) {
        printf("enter a number\n");
        scanf("%f",&numbers[i]);
        ++i;
    }
    i=0;
    while (i<size)  {
    while (j<size) {
        if (numbers[i]==numbers[j]) {
        ++count; 
    }
    ++j;
        }
        printf("the frequency for index %d is %d\n",i,count);
        count=1;
        ++i;
        x=i-1;
        while (x>=0) {
        if  (numbers[i]==numbers[x])
          { 
		  ++i;
		  x=i-1;
             }  else { 
			 --x;
             	
			 }
             
        }
        j=i+1;
}
    return 0;
}
