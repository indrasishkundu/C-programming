#include<stdio.h>
#include<conio.h>

int main()
{
	char string[100];
	int c, count[26]={0};
	printf("Enter a string \n");
	gets(string);
	while(string[c]!='\0')
	{
		if (string[c]>='a',&&string[c]count[string[c])-'a']++;
		
		c++;
	}
	for(c=0;c<26;c++)
	{
		if(count[c]!=0)
		printf("%c occurs %d times in the entered string \n", c+'a',count[c]);
	}
	return 0;
}

