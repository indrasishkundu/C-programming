//quick sort
#include<stdio.h>
void quick(int a[],int low,int high);
main(){
   int n,i,j,a[100];
	printf("Enter how many nos-->");
	scanf("%d",&n);
	printf("enter array elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick(a,0,n-1);
	printf("\n sorted array-->\n");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}
void quick(int a[],int low,int high)
{
	int pivot,i,j,temp;
	if(low<high)
	{
		pivot=low;
		i=low;
		j=high;
	while(i<j)
	{
		while(a[i]<=a[pivot]&& i<=high)
		{
			i++;
		}
	while(a[j]>a[pivot]&& j>=low)
	{
		j--;
	}
	if(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
   }
temp=a[j];
a[j]=a[pivot];
a[pivot]=temp;
quick(a,low,j-1);
quick(a,j+1,high);
}
}

