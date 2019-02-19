/*summation of digits*/
#include<stdio.h>
main()
{
	int i,n,m,s=0;
	printf("Enter the first range--> \n");
	scanf("%d",&m);
	printf("Enter last range--> \n");
	scanf("%d",&n);
	for(i=m;i<=n;i++)
	{
		s=s+i;
	}
	printf("summation from %d to %d is--%d",m,n,s);
	return 0;
}

