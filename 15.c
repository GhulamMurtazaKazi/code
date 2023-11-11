This is a C program that checks if a given number is a palindrome. A palindrome is a number that remains the same when its digits are reversed. The user inputs a number, and the program checks if it’s a palindrome.
#include<stdio.h>
#include<math.h>
int main () {
	int  count=0,i,x,j,number;
	printf("enter a number\n");
	scanf("%d",&number);
	j=number;
    while (number>0) {
    	number=number/10;
    	++count;
	}
	number=j;
	i=count;
	x=count;
	while (i>(x/2))
	{
	 j=number/pow(10,count-1);   
	if ((number%10)!=j) {
		printf("not a palindrome");
		
		return 0;
	}
	number=number%((int)pow(10,count-1));
	number=number%10;
	--i;
	count -=2;
		}
		printf("this is a palindrome number");
			
		return 0;
}
/*A third way this question can be done is by declaring two arrays and first storing the complete number in one array 
and storing the reverse of the number in another array.Then simply comparing both the arrays index  by  index 
starting from 0 to count-1*/
 
  
