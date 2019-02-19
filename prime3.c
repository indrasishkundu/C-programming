/*prime*/
#include<stdio.h>
#include<math.h>
main()
{
	int i,n,flag=0;
	printf("Enter the range-->");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	   if(flag==0)
	   {
	 	printf("prime");
	   }
	  else
	  {
		printf("not prime");
	  }
	
	return 0;
}


