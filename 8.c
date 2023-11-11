This is a C program that calculates which of two wolves is closer to a sheep. The user inputs the positions of the sheep, wolf A, and wolf B. The program then calculates the distances between the sheep and each wolf using the formula for distance in a one-dimensional space, which is the absolute difference between the two positions.
#include<stdio.h>
#include<math.h>
int main () {
	float sheep,wolfA,wolfB;
	scanf("%f %f %f",&sheep,&wolfA,&wolfB);
	float D1,D2;
	D1=sqrt(pow(wolfA-sheep,2));
	D2=sqrt(pow(wolfB-sheep,2));
	if (D1>D2) {
		printf("wolfB");
	} else if (D2>D1) {
	printf("wolfA");
	}
	else { 
	printf("wolves distracted,sheep escaped");

	}
	return 0;	
	
	
}
