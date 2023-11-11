This C program calculates the time taken to prepare a cup of coffee based on the type of coffee (White or Black), the cup size (Regular or Double), and the method of preparation (Manual). The user is asked to input these details. Depending on these inputs, the program calculates the time taken for each step of the coffee preparation process and the total time taken.
#include<stdio.h>
int main () {
	char coffeetype,cupsize,coffee;
	printf("Enter the type of coffee (W/B), cup size (D for double/R for regular), coffee (M for manual) separated by spaces: ");
	scanf(" %c %c %c",&coffeetype,&cupsize,&coffee);
	switch (coffee) {
		case 'M': 
		switch (coffeetype) {
			case 'W':
				
				{
				int putwater=15; 
				int sugar=15; 
				int mixwell=20; 
				int addcoffee=2; 
				int addmilk=4;
				switch (cupsize) {
					case 'R':
				printf("Time taken for each step:\n");
				printf("Put water=%d\nSugar=%d\nMix well=%d\nAdd coffee=%d\nAdd milk=%d\nMix well=%d\n",putwater,sugar,mixwell,addcoffee,addmilk,mixwell);
				printf("Total time=%d\n",putwater+sugar+mixwell+addcoffee+addmilk+mixwell);
				break;
				case 'D':
					printf("Time taken for each step:\n");
				printf("Put water=%d\nSugar=%d\nMix well=%d\nAdd coffee=%d\nAdd milk=%d\nMix well=%d\n",putwater,sugar,mixwell,addcoffee,addmilk,mixwell);
				printf("Total time=%f\n",(((putwater+sugar+mixwell+addcoffee+addmilk)*0.5)+putwater+sugar+mixwell+addcoffee+addmilk));
				break;}
				break;}
			
					
				
			case 'B':
				{
				int putwater=20; 
				int sugar=20; 
				int mixwell=25; 
				int addcoffee=15;
				switch (cupsize) {
					case 'R':
				printf("Time taken for each step:\n");
				printf("Put water=%d\nSugar=%d\nMix well=%d\nAdd coffee=%d\nMix well=%d\n",putwater,sugar,mixwell,addcoffee,mixwell);
				printf("Total time=%d\n",putwater+sugar+mixwell+addcoffee);
				break;
				case 'D':
					printf("Time taken for each step:\n");
				printf("Put water=%d\nSugar=%d\nMix well=%d\nAdd coffee=%d\nMix well=%d\n",putwater,sugar,mixwell,addcoffee,mixwell);
				printf("Total time=%f\n",(((putwater+sugar+mixwell+addcoffee+mixwell)*0.5)+putwater+sugar+mixwell+addcoffee+mixwell));
				break;	}
					
				break;}
				}
		}
	return 0;
}
