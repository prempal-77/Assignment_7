/*Write a program to check whether a given number is there in the Fibonacci series or
not.*/

#include <stdio.h>

int main() 
{
  int n, t1 = 0, t2 = 1, next_term;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  while (t1 < n) 
  {
    next_term = t1 + t2;
    t1 = t2;
    t2 = next_term;
  }

  if (t1 == n) 
  {
    printf("%d is a Fibonacci number", n);
  } 
  else 
  {
    printf("%d is not a Fibonacci number", n);
  }

  return 0;
}
