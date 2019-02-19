/*bubble sort*/
#include<stdio.h>
void bubble(int arr[ ],int n);
main()
{
	int n,i,arr[100];
	printf("Enter how many nos-->");
	scanf("%d",&n);
	printf("enter array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble(arr,n);
	printf("\n sorted array-->\n");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
		
}

void bubble(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];  //SWAP
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
