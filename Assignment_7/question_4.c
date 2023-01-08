//Write a program to calculate HCF of two numbers

#include <stdio.h>

int main() 
{
  int m, n, hcf;

  printf("Enter two positive integers: ");
  scanf("%d %d", &m, &n);

  for (int i = 1; i <= m || i <= n; i++) 
  {
    if (m % i == 0 && n % i == 0) 
    {
      hcf = i;
    }
  }

  printf("The HCF of %d and %d is %d.", m, n, hcf);

  return 0;
}
