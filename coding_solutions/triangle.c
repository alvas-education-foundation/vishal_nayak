#include <stdio.h>
int main(){
  int n, i=0;
  printf("Enter the number N: ");
  scanf("%d",&n);
  printf("The sequence of triangular number is: " );
  while (i++<n)
    printf("%d  ",(i*(i+1)/2) );
  return 0;
}