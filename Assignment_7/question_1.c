//Write a program to find the Nth term of the Fibonnaci series.


#include <stdio.h>

int main() 
{
  int n, t1 = 0, t2 = 1, next_term;

  printf("Enter the positive integer: ");
  scanf("%d", &n);

  printf("Fibonacci series: ");

  for (int i = 1; i <= n; ++i) 
  {
    printf("%d, ", t1);
    next_term = t1 + t2;
    t1 = t2;
    t2 = next_term;
  }

  return 0;
}
