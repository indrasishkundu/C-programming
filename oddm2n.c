/*printing odd nos between m to n*/
#include<stdio.h>
main()
{
	int i,m,n;
	printf("enter first range-->");
	scanf("%d",&m);
	printf("print odd nos till--> \n");
	scanf("%d",&n);
	printf(" all odd nos from %d to %d are--> \n",m,n);
	i=m;
	while(i<=n)
	{
		 if((i%2)!=0)
		  {	
		  printf("%d \t",i);
	      }
	i=i+1;
	}
	
	return 0;
}
	
	

