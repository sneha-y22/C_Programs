#include<stdio.h>
int main() {
  double a, b, temp;
  printf("Enter first number: ");
  scanf("%f", &a);
  printf("Enter second number: ");
  scanf("%f", &b);

  temp = a;
  a = b;
  b = temp;

  printf("\nAfter swapping, first number = %f\n", a);
  printf("After swapping, second number = %f", b);
  return 0;
}
