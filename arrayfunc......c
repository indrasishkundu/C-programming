#include<stdio.h>
void funarr(int a[ ],int n );
void main()
{
	int n,arr[10],i;
	printf("Enter range-->");
	scanf("%d",&n);
	printf("Enter elements-->");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	funarr(arr,n);
}
void funarr(int a[ ],int x)
{
	int i;
	for(i=0;i<x;i++)
	{
		printf("%d",a[i]);
	}
}

