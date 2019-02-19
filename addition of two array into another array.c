/*addition of two array into another array*/
#include<stdio.h>
main()
{
	int i,n,arr1[100],arr2[100],sum=0;
	printf("Enter the size of the 1st array-->");
    scanf("%d",&n);
    printf(" enter %d elements in the 1st array-->",n);
   	printf("Enter the size of the 2nd array-->");
    scanf("%d",&n);
   printf(" enter %d elements in the 2nd array-->",n);
   for(i=0;i<n;i++)
   {
   	scanf("%d",&arr1[i]);
   }
   for(i=0;i<n;i++)
   { 
       printf("%d \n",arr2[i]);
       scanf("%d",&arr1[i]);
       sum=arr1[100]+arr2[i];
    }
   printf("sum of odd elements of array--%d",sum);
   return 0;
	
}
