This C program calculates the total interest payable, total amount payable, and monthly payment for a mortgage based on the account number, interest rate, mortgage term, and mortgage amount. The user is asked to input these details. If the account number is less than 0, the program prints an error message. Otherwise, it calculates the total interest payable, total amount payable, and monthly payment, and prints these values.
#include<stdio.h>
#include<math.h>
int main () {
	float accountnumber,interestrate,montgageterm,mortgageamount,totalinterestpayable,totalamountpayable,monthlypayment;
	printf("enter accountnumber,interestrate,mortgageterm,mortgageamount\n");
	scanf("%f\n %f\n %f\n %f",&accountnumber,&interestrate,&montgageterm,&mortgageamount);
	if (accountnumber<0) {
		printf("invalid account number/enter again");
	}
	totalinterestpayable=(mortgageamount*interestrate*montgageterm);
	printf("totalinterestpayable=%f\n",totalinterestpayable);
	totalamountpayable=mortgageamount+totalinterestpayable;
	printf("totalamountpayable=%f\n",totalamountpayable);
	monthlypayment=totalamountpayable/(montgageterm*12);
	monthlypayment=round(monthlypayment);
	printf("monthlypayment=%f\n",monthlypayment);

	
	
	return 0;
}
