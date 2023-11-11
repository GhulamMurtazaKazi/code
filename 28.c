Rotate a matrix by 90'

#include <stdio.h>

int main() {
  int n,i,j;
  printf("Enter the size of the matrix: ");
  scanf("%d", &n);

  int arr[n][n];
  printf("Enter the elements of the matrix:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  // Transpose the matrix.
  for (i = 0; i < n; i++) {
    for (j = i; j < n; j++) {
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

  // Reverse each row of the matrix.
  for (i = 0; i < n; i++) {
    for (j = 0; j < n / 2; j++) {
      int temp = arr[i][j];
      arr[i][j] = arr[i][n - j - 1];
      arr[i][n - j - 1] = temp;
    }
  }

  printf("The rotated matrix is:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
