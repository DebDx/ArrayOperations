#include<stdio.h>
#include<malloc.h>
void main()
 {
  int *a,i,n,p,no;
  printf("\nEnter the size of array");
  scanf("%d",&n);
  a=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
   {
    printf("\nEnter the number at %d",i+1);
    scanf("%d",(a+i));
   }
  printf("\nEnter the position where the number is to be inserted");
  scanf("%d",&p);
  printf("\nEnter the number to be inserted");
  scanf("%d",&no);
  for(i=5;i>=p;i--)
   {
    if(i==p)
     {
      *(a+i+1)=*(a+i);
      *(a+i)=no;
     }
    else
     *(a+i+1)=*(a+i);
  }
  for(i=0;i<n+1;i++)
   {
    printf("%d ",*(a+i));
   }
}

