For a positive integer n let's define a function f:
f(n) = - 1 + 2 - 3 + .. + ( - 1)^n*n
Your task is to calculate f(n) for a given integer n.
#include<stdio.h>
#include<math.h>
int main() {
	int n,i=1,sum=0;
	printf("enter x\n");
	scanf("%d",&n);
	while (i<=n) {
		sum=sum+(pow(-1,i)*i);
		++i;
	}
	printf("%d",sum);
	return 0;
}
