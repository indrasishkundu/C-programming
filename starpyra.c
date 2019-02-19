 /*print star pyramid*/
#include<stdio.h>
main()
{
	int i,row,j,k,l,m,n;
	printf("Enter no of row-->");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=row-1;j>=i;j--)
		{
			printf(" ");
		}
	k=i;
	for(l=1;l<=i;l++)
	{
		printf("*");
			
	k=k+1;
    }
    m=k-2;
    for(n=m;n>=i;n--)
    {
    	printf("*");
    	m=m-1;
	}
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(k=2*(row-i)+1;k>=1;k--)
		{
			printf("*");
		}
		printf("\n");
    } 
    return 0;
	}
