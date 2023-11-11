This is a C program that checks if two trains, starting at different locations and moving at different speeds, will meet or not. The user is asked to input the initial positions and speeds of both trains. The program then checks various conditions to determine if the trains will meet (output "1") or not (output "0"). 
#include<stdio.h>
int main ()  {
	int X1,X2,V1,V2;
	printf("enter the initial position and speed of train 1\n enter the initial position and speed of train 2\n");
	scanf("%d %d %d %d",&X1,&V1,&X2,&V2);
	if (X1==X2) {
		if (V1==V2) {
			printf("1");
		} else {
			printf("0");
		}
	}
	else if (X1>X2&&V1>=V2||X2>X1&&V2>=V1) {
			printf("0");
		} else {
			printf("1");
		}
	return 0;
}
