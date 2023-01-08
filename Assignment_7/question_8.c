//Write a program to find next Prime number of a given number


#include <stdio.h>

int main() 
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  while (1) 
  {
    int is_prime = 1;
    n++;  
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
      printf("The next prime number is: %d\n", n);
      break;
    }
  }
  return 0;
}
