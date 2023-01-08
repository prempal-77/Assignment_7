//Write a program to print all Prime numbers between two given numbers


#include <stdio.h>
#include <math.h>

int main() 
{
  int a, b;
  printf("Enter the lower value: ");
  scanf("%d", &a);
  printf("Enter the upper value: ");
  scanf("%d", &b);

  for (int n = a; n <= b; n++) 
  {
    if (n < 2) 
    continue;  
    int is_prime = 1;
    for (int i = 2; i <= sqrt(n); i++) 
    {
      if (n % i == 0) 
      {
        is_prime = 0;
        break;
      }
    }
    if (is_prime) 
    {
      printf("%d\n", n);
    }
  }
  return 0;
}
