//selection sort
#include<stdio.h>
main()
 {
    int arr[100],i,n,s,t;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
      {
       printf("%d. Enter element: ",i+1);
       scanf("%d",&arr[i]);
    }
    for(s=0;s<n;++s)
    for(i=s+1;i<n;++i)
     {
         if(arr[s]>arr[i])  
          {
             t=arr[s];
             arr[s]=arr[i]; 
             arr[i]=t;
         }
    }
    printf("In ascending order: ");
    for(i=0;i<n;++i)
        printf("%d  ",arr[i]);
    return 0;
}
