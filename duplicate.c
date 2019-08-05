#include<stdio.h>
#include<malloc.h>
void main()
 {  
  int *a,i,j,t,c=1,k=0,n;
  printf("\nEnter the number of terms");
  scanf("%d",&n);
  a=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
   {
    printf("\nEnter the number at %d",i+1);
    scanf("%d",(a+i));
   }
 for(i=0;i<n-1;i++)
  {
   for(j=0;j<n-i-1;j++)
    {
     if(*(a+j)>*(a+j+1))
      {
       t=*(a+j);
       *(a+j)=*(a+j+1);
       *(a+j+1)=t;
      }
    }
  }
  for(i=0;i<n;i++)
   {
    while(*(a+i)==*(a+k+1))
     {
       c++;
       k++;
     }
   
  printf("\n%d has %d duplicates",*(a+i),(c-1));
i=k;
c=0;
}
}
