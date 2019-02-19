/*printing odd nos between m to n*/
#include<stdio.h>
main()
{
	int i,m,n;
	printf("enter range for %d--> \n",m);
	scanf("%d",&m);
	printf("enter range upto %d--> \n",n);
	i=m;
	while(i<=n)
	{
		
		printf("%d",i);
    i=i+1;
	}
	if(i%2!=0)
		{
		printf("odd nos are-->\n");	
		}
	getch();
	return 0;
}
