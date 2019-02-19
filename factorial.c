/*factorial*/
#include <stdio.h>
#include<conio.h>
int main()
{
unsigned long  int c, n;
   long  fact = 1;
 
  printf("Enter a number to calculate its factorial--\n");
  scanf("%u", &n);
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("Factorial = %u\n", n, fact);
  getch();
  return 0;
}

