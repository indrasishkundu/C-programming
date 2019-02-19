/*adding all nos in an array*/
#include<stdio.h>
main()
{
   int 	i,n,arr[100],sum=0;
   printf("Enter the size of the array-->");
   scanf("%d",&n);
   printf(" enter %d elements in the array-->",n);
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
   	sum=sum+arr[i];
   }
   printf("sum of all elements of array--%d",sum);
   return 0;
}
