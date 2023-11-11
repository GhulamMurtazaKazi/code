// To check wheather a given matrix is a identity matrix or not  
#include<stdio.h>
int main () {
	float matrix[100][100],rows,columns;
	int i=0,j;
	printf("enter the rows of matrix\n");
	scanf("%f",&rows);
		printf("enter the columns of matrix\n");
	scanf("%f",&columns);
	if (rows!=columns) {
		printf("it isnot a square matrix hence it won't be a identity matrix");
	}
	else {
		printf("enter the elements of the matrix\n");
		while (i<rows) {
			j=0;
			while (j<columns) {
				scanf("%f",&matrix[i][j]);
				if (i==j) {
					if (matrix[i][j]!=1) {
						printf("it isnot an identity matrix");
						return 0;
						} 
					}
						else {
							if (matrix[i][j]!=0) {
								printf("it isnot an identity matrix");
								return 0;	
							}
						}	
				++j;
			}
			++i;
		}
		printf("it is an identity matrix");
	}	
return 0;	
	}
