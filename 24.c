An elephant decided to visit his friend. It turned out that the elephant's house is located at point 0
and his friend's house is located at point x(x > 0) of the coordinate line. In one step the elephant
can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he
need to make in order to get to his friend's house.

  #include<stdio.h>
int main  () {
	int x,elephant=0,steps=0;
	printf("enter x\n");
	scanf("%d",&x);
	while (1) {
		if (elephant+5<=x) {
			elephant=elephant+5;
			++steps;
		}
		else if (elephant+4<=x) {
			elephant=elephant+4;
				++steps;
		}
		else if (elephant+3<=x) {
			elephant=elephant+3;
				++steps;
		} 
		else if (elephant+2<=x) {
			elephant=elephant+2;
				++steps;
		}
		else if (elephant+1<=x) {
			elephant=elephant+1;
				++steps;
		}
		if (elephant==x) {
			break;
		}
		}
		printf("%d",steps); 
	return 0;
}

