/*print pattern*/
#include<stdio.h>
main()
{
int i, row,j,k,l,m,n;
printf("enter row-->");
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
		printf("%d",k);
		k=k+1;
	}
	m=k-2;
	for(n=m;n>=i;n--)
	{
		printf("%d",m);
		m=m-1;
	}
	printf("\n");
	}
	return 0;		
}
