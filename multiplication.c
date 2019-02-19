/* C Program to Print Multiplication Table */
#include<stdio.h>
main()
{
 int i,j;
 
 printf("\n Please enter any Positive Integer Less than 50--> \n");
 scanf("%d", &i);
 
 printf("\n Multiplication Table : \n");
   for (j = 1; j <= 50; j++)
    {
      printf(" %d * %d = %d\n",i ,j, i * j);
    }
    printf("\n --------------------\n");
 return 0;
}
