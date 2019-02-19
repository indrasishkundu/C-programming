/*printing of 1to n those are not divisible by 3 ,4*/
#include<stdio.h>
main()
{
	int i,n;
	printf("print nos till--> \n");
	scanf("%d",&n);
	printf("all nos from 1 to %d not divisible by 3 and 4-->\n",n);
	for(i=1;i<=n;i++)
	{
		 if((i%4)!=0&&(i%3)!=0)
		{
			printf("%d \t",i);
		}
	}
	return 0;
}
