#include<stdio.h>
void array_min(int arr[],int n);
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
	array_min(arr,n);
}

void array_min(int arr[],int n)
{
int min,i;
min=arr[0];
for(i=1;i<n;i++)
{
	if(arr[i]<min)
	{
		min=arr[i];
	}
}
	printf("Min element=%d",min);
}

