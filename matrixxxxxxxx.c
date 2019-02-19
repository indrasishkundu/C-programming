/*matrix*/
#include<stdio.h>
main()
{
	int row,col,i,j,arr[10][10];
	printf("enter no of rows-->");
	scanf("%d",&row);
	printf("enter no of cols-->");
	scanf("%d",&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		for(i=0;i<row;i++)
		{
	     for(j=0;j<col;j++)
	    {
		
			printf(" %d",arr[i][j]);
		}
	}
	printf("\n");
	return 0;
}
