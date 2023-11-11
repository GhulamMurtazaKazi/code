This is a C program that simulates the distribution of cookies to children sitting in a circle. The user inputs the total number of cookies, the seat number where the distribution starts, and the total number of children. The program then calculates which child will receive the last cookie.
  #include<stdio.h>
int main () {
	int total_cookies,seat,total_children,raw,i;
	printf("enter total_cookies\n seat\n total\n");
	scanf("%d %d %d",&total_cookies,&seat,&total_children);
	i=1;
	while (i<total_cookies) {
		++i;
		seat=seat+1;
		
		if (seat>total_children) {
			seat=1;
		}
	}
	printf("the raw cookie will given be to %d",seat);
	return 0;
}
