/*printing summation of odd nos bet m to n*/
#include<stdio.h>
main()
{
	int i,m,n,s=0;
	printf("enter 1st range--> \n");
	scanf("%d",&m);
	printf("enter no till--> \n");
	scanf("%d",&n);
	printf(" all odd nos from %d to %d are--> \n",m,n);
	i=m;
	while(i<=n)
	{
		if((i%2)!=0)
		  {	
		  printf("%d \t",i);
		  s=s+i;
	      }
	i=i+1;	
	}
	printf("summation of nos-->%d \n",s);
	return 0;
}
