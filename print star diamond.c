/*print star diamond*/
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
	for(j=1;j<= 2*(row-i)-1;j++)
	{
		printf("*");
	}	
	printf("\n");
	}
	return 0;
}
