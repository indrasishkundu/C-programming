/*search linearly array*/
#include<stdio.h>
#include<stdlib.c>
main()
{
	int arr[100],n,i,search,flag=0;
	printf("How many nos--> \n");
	scanf("%d",&n);
	printf("enter no of elements--> \n");
	for(i=0;i<n;i++)
	{
	 scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
	{
    	printf("%d",arr[i]);
	}
	printf("\n Enter a no to be searched--> ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			printf("present at %d position",i+1);

}
