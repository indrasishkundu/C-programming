/*wap to find the max min elements of an  array by using two diff  func array max array min*/
#include<stdio.h>
void array_max(int arr[],int n);
main()
{
	int n,arr[10],i;
	printf("Enter range-->");
	scanf("%d",&n);
	printf("Enter elements-->");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	array_max(arr,n);
}

void array_max(int arr[],int n)
{
int max,i;
max=arr[0];
for(i=1;i<n;i++)
{
	if(arr[i]>max)
	{
		max=arr[i];
	}
}
	printf("Max element=%d",max);
}

