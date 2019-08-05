#include<stdio.h>
#include<malloc.h>
void main()
 {
int *a,i,j,k,n;
 printf("\nEnter the number of terms");
 scanf("%d",&n);
 a=(int *)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
  {
   printf("\nEnter the number at %d",i+1);
   scanf("%d",(a+i));
  }
 printf("\nEnter the position where the number is to be inserted");
 scanf("%d",&k);
  for(i=0;i<n;i++)
   {
    if(i==k)
     {
      for(j=i;j<n;j++)
       {
        *(a+j)=*(a+j+1);
       }
     }
  }
 for(i=0;i<n-1;i++)
  {
    printf("%d",*(a+i));
  }
}
