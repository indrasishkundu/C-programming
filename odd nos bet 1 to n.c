/*printing odd nos bet 1 to n*/
#include<stdio.h>
main()
{
	int i=1,m,n;
	printf("enter 1st range--> \n");
	scanf("%d",&m);
	printf("enter no till--> \n")
	scanf("%d",&n);
	printf(" all odd nos from 1 to %d are--> \n",n);
	while(i<=n)
	{
	printf("%d \n",i);
	i=i+2;	
	}
	return 0;
}
