/*adding the odd position of an array*/
#include<stdio.h>
main()
{
   int i,n,arr[100],sum=0;
   printf("Enter the size of the array-->");
   scanf("%d",&n);
   printf(" enter %d elements in the array-->",n);
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++)
   {
   	if(arr[i]%2!=0) 
    {
       printf("%d \n",arr[i]);
       sum=sum+arr[i];
    }
   }
   printf("sum of odd elements of array--%d",sum);
   return 0;
}
