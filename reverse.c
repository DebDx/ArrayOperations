#include<stdio.h>
#include<malloc.h>
void main()
 {
  int *a,t,i,j,n;
  printf("\nEnter the array size");
  scanf("%d",&n);
  a=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
   {
    printf("\nEnter the number at %d",i+1);
    scanf("%d",(a+i));
   }
  i=0;
  j=n-1;
  while(i!=j)
   {
    t=*(a+i);
    *(a+i)=*(a+j);
    *(a+j)=t;
    i++;
    j--;
   }
  for(i=0;i<n;i++)
   {
    printf("%d ",*(a+i));
   }
 } 
