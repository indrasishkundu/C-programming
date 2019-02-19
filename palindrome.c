/*palindrome no checking*/
#include<stdio.h>
main()
{
	int r,n,original,rev=0;
	printf("\n Enter a no to check whether it is palindrome-->");
	scanf("%d",&n);
	original=n;
	while(n!=0)
	{
	 r=n%10;
	 rev=rev*10+r;
	 n=n/10;	
	}
	if(original==rev)
	{
		printf("%d is a palindrome no",original);
	}
	else
	{
		printf("%d is not a palindrome no",original);
	}
    return 0;	
}
