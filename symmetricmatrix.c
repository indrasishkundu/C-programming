#include<stdio.h>
main()
{
   int m, n, c, d, matrix[100][100], transpose[100][100];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d",&m,&n);
   printf("Enter elements of the matrix\n");
 
   for (c=0 ;c<m;c++)
   {
    for (d=0; d<n;d++)
    {
         scanf("%d",&matrix[c][d]);
    }
   }
 
   for(c=0;c<m;c++)
   {
      for(d=0;d<n;d++)
      {
         transpose[d][c] = matrix[c][d];
      }
   }
 
   if(m==n) 
   {
       for (c=0;c<m;c++)
       {
           for (d =0;d<m;d++)
           {
               if ( matrix[c][d] != transpose[c][d] )
                  break;
           }
           if (d!=m)
              break;
       }
       if (c==m)
          printf("Symmetric matrix.\n");
   }
   else
       printf("Not a symmetric matrix.\n");
 
   return 0;
}
