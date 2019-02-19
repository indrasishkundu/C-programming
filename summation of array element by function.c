/*summation of array element by function*/
#include<stdio.h>
void summ(int a[],int n);
main()
{
	int n,arr[10],i,sum=0;
	printf("Enter range-->");
	scanf("%d",&n);
	printf("Enter elements-->");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
summ(arr,n);
}
void summ(int a[],int x)
{
	int i,sum=0;
	for(i=0;i<x;i++)
	{
		sum=sum+a[i];
	}
	printf("%d",sum);
	return sum;
}
