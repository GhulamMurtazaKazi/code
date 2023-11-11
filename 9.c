This is a C program that calculates the fewest number of page flips needed to reach a certain page in a book, starting from either the front or the back. The user inputs the total number of pages in the book and the current page number. The program then calculates the number of page flips needed from the front and the back of the book.
#include<stdio.h>
int main () {
	int totalpages, currentpage;
	printf("Enter the total number of pages and current page: ");
	scanf("%d %d", &totalpages, &currentpage);
	int flipsfromfront = currentpage / 2;
	int flipsfromback;
	if (totalpages % 2 == 0) {
		flipsfromback = ((++totalpages - currentpage) / 2);
	} else {
		flipsfromback = ((totalpages - currentpage) / 2); 
	}
	if (flipsfromfront > flipsfromback) {
		printf("Fewest number of flips = %d", flipsfromback);
	} else if (flipsfromfront < flipsfromback) {
		printf("Fewest number of flips = %d", flipsfromfront);
	} else {
		printf("Fewest number of flips from either side = %d", flipsfromback);
	}
	return 0;
}
