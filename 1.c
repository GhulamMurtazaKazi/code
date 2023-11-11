This C program calculates the sale price of an item based on its actual cost. The user is asked to input the cost of the item. Depending on the cost, a discount is applied:

- If the cost is between 2000 and 4000 (inclusive), a 20% discount is applied.
- If the cost is between 4001 and 6000 (inclusive), a 30% discount is applied.
- If the cost is above 6000, a 50% discount is applied.

The program then calculates the amount saved and the sale price (which is the actual cost minus the amount saved), and prints these values.

#include<stdio.h>
int main () {
	float actualamount,amountsaved,saleprice;
	printf("input the cost of items\n");
	scanf("%f",&actualamount);
	if (actualamount>=2000&&actualamount<=4000) {
		amountsaved=actualamount*0.2;
	} else if (actualamount>=4001&&actualamount<=6000)  {
		amountsaved=actualamount*0.3;
	} else { 
	amountsaved=actualamount*0.5;
	}
	saleprice=actualamount-amountsaved;
	printf("actualamount%f,amountsaved%f,saleprice%f",actualamount,amountsaved,saleprice);
	return 0;
	
}
