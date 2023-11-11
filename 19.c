This is a C program that calculates the possible coordinates for a series of black leathered books given the total number of consecutive books (k) and the x-coordinate of one of the books (x). The user is asked to input the total number of books and the x-coordinate of a book. 
  #include<stdio.h>
int main () {
	int k,x,j;
	printf("Enter the total consecutive number of black leathered books\n");
	scanf("%d",&k);
	if (k<1||k>100)  {
		printf("The range for the number of books is from 1-100 ");
		return 0;
	}
	else {
		printf("Enter the x coordinate of a black leathered book\n");
		scanf("%d",&x);
		if (x<0||x>100) {
			printf("The x coordinate can be from 0 to 100");
			return 0;
		}
		else {
			j=x-(k-1);
			printf("The possible coordinates for the black leathered books are\n");
			while (j<=(x+(k-1))) {
			printf("%d\t",j);
			++j;
		}
		}
	}
	return 0;
}
