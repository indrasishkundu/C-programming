/*binary to decimal*/
#include<stdio.h>
main()
{
	int num,bin,dec=0,base=1,r;
	printf("Enter a binary no(1 & 0s)-->");
	scanf("%d",&num);
	bin=num;
	while(num>0)
	{
		r=num%10;
		dec=dec+r*base;
		num=num/10;
		base=base*2;
	}
	printf("the binary equivalent is %d \n",bin);
	printf("the decimal equivalent is %d \n",dec);
	return 0;
}
