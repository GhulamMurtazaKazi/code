This is a C program that creates a zigzag pattern in a matrix. The size of the matrix is input by the user. The program fills the matrix with numbers from 1 to n*n in a zigzag pattern. If the row index is even, the numbers are filled from left to right. If the row index is odd, the numbers are filled from right to left. After filling the matrix, the program prints the matrix.

#include<stdio.h>
int main () {
int number,matrix[100][100],i=0,j,k=1;
printf("the size of matrix\n");
scanf("%d",&number);
while (i<number) {
if (i%2==0) {
j=0;
while (j<number) {
matrix[i][j]=k;
++k;
++j;
}
++i;
}
else {
j=number-1;
while (j>=0) {
matrix[i][j]=k;
++k;
--j;
}
++i;
}
}
i=0;
while(i<number) {
j=0;
while(j<number) {
printf("%d\t",matrix[i][j]);
++j;
}
printf("\n");
++i;
}
return 0;
}
