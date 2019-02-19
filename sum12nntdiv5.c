/*summation of nos between 1 to n those are divisible by 5*/
#include<stdio.h>
main()
{
	int i=1,n,s=0;
	printf("summation of nos-> \n");
	scanf("%d",&n);
	while(i<=n)
	{
    	if(i%5==0)
	    {
        printf("%d \t",i);		
	    }
	    s=s+i;
	    i=i+1;
	}
	return 0;
}
