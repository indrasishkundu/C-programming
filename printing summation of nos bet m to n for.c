/*printing summation of nos bet m to n*/
#include<stdio.h>
main()
{
	int i,m,n,s=0;
	printf("enter 1st range--> \n");
	scanf("%d",&m);
	printf("enter no till--> \n");
	scanf("%d",&n);
	for(i=m;i<=n;i++)
	{
     s=s+i;     	
	}
	printf("summation of nos-->%d \n",s);
	return 0;
}
