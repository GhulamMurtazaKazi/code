This is a C program that reads a sequence of integers and prints out the integers on the
middle occurrence of each number in the order they were encountered.
 #include <stdio.h>
int main() {
 int N, numbers[10000], index[10000], i = 0, j, x = 0, k = 0,temp;
	printf("enter number of integers\n");
 scanf("%d", &N);
 printf("enter the sequence\n");
 while (i < (N * 3)) {
  scanf("%d", &numbers[i]);
  ++i;
 } 
 i = 0;
 while (x<N) {
  j = i + 1;
  while (j < (N * 3)) {
   if (numbers[i] == numbers[j]) {
    index[x] = j;
    ++x;
    break;
   } else {
    ++j;
   }
  }
	++i; 
  k=0;
  while (k<i) {
  	if (numbers[k]==numbers[i]) {
  		++i;
  		k=0;
	  } else {
	  	++k;
	  }
  }
	}
 i = 0;
 while (i<x) {
  j = i + 1;
  while (j < x) {
   if (index[i] < index[j]) {
    ++j;
   } else {
   	temp = index[i];
    index[i] = index[j];
    index[j] = temp;
    ++j;
  }
	 }
   
  ++i;
 }
 i = 0;
 while (i < x) {
  printf("%d ", numbers[index[i]]);
  ++i;
 }
 return 0;
} 
