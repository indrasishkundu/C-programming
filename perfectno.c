/*perfect no*/
#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=(n-1);i++)
	{ 
	  if(n%i==0)
	  {
	  sum=sum+i;
      }
	}
	if(n==sum)
	{
	printf("%d is perfect no",n);	
	}
	 else
	 {
	 printf("%d is not perfect no",n);
	 }
	 return 0;
	 
}

