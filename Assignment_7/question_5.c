//Write a program to check whether two given numbers are co-prime numbers or not

#include <stdio.h>

int main() 
{
  int m, n, hcf;

  printf("Enter two positive integers: ");
  scanf("%d %d", &m, &n);

  for (int i = 2; i <= m || i <= n; ++i) 
  {
    if (m % i == 0 && n % i == 0) 
    {
      hcf = i;
      break;
    }
  }

  if (hcf == 1) 
  {
    printf("%d and %d are co-prime numbers", m, n);
  } 
  else 
  {
    printf("%d and %d are not co-prime numbers", m, n);
  }

  return 0;
}
