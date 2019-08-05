#include<stdio.h>
#include<malloc.h>
void main()
 {
  int *a,n,i,j,d,*b,k;
  printf("\nEnter the array size");
  scanf("%d",&n);
  a=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
   {
    printf("\nEnter the number at %d",i+1);
    scanf("%d",(a+i));
  }
 printf("\nEnter the number of times array is to be rotated");
 scanf("%d",&d);
 if(d>n)
  d=d%n;
 for(i=0;i<d;i++)
  {
   *(b+i)=*(a+i);
  }
 for(i=0;i<d;i++)
  {
   for(j=0;j<n;j++)
    {
     *(a+j)=*(a+j+1);
    }
  }
k=0;
 for(i=n-d;i<n;i++)
  {
   *(a+i)=*(b+k);
   k++;
  }
  for(i=0;i<n;i++)
   {
    printf("%d ",*(a+i));
}
}
