This C program decrypts a 4-digit encrypted code. The user is asked to input the encrypted code. The program then decrypts each digit of the code using a specific algorithm: if the digit is between 0 and 5, it adds 10 to the digit and subtracts 6; if the digit is between 6 and 9, it subtracts 6. The decrypted digits are then rearranged and printed as the decrypted code.
#include<stdio.h>
int main () {
	int encryptedcode,a,b,c,d;
	printf("enter the encrypted code");
	scanf("%d",&encryptedcode);
	a=encryptedcode%10;
	encryptedcode=encryptedcode/10;
	if (a>=0&&a<=5) {
		a=(10+a)-6;
	} else if (a>=6&&a<=9) {
		a=a-6;
		
	}
	b=encryptedcode%10;
	encryptedcode=encryptedcode/10;
	if (b>=0&&b<=5) {
		b=(10+b)-6;
	} else if (b>=6&&b<=9) {
		b=b-6; }
		c=encryptedcode%10;
	encryptedcode=encryptedcode/10;
		if (c>=0&&c<=5) {
		c=(10+c)-6;
	} else if (c>=6&&c<=9) {
		c=c-6;
		
	}
	d=encryptedcode%10;
		if (d>=0&&d<=5) {
		d=(10+d)-6;
	} else if (d>=6&&d<=9) {
		d=d-6;
		
	}
	printf("the decrypted code is %d%d%d%d",b,a,d,c);
	return 0;
	
}

what if your task is to actually encrypt the code
#include<stdio.h>
int main () {
	int a,b,c,d;
	printf("enter each digit of the code individually");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	a=a+6;
	a=a%10;
	b=b+6;
	b=b%10;
	c=c+6;c=c%10;
	d=d+6;
	d=d%10;
	printf("%d%d%d%d",c,d,a,b);
	

	return 0;

}
