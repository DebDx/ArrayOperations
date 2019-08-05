#include<stdio.h>
#include<malloc.h>
void main()
 {
  int *a,i,l,f,mid,n,t,k,c=0,j;
  printf("\nENter the number of elements");
  scanf("%d",&n);
  a=(int *)malloc(n*sizeof(int)); 
 for(i=0;i<n;i++)
  {
    printf("\nENter the number at %d",i+1);
    scanf("%d",(a+i));
  }
  printf("\nEnter the number to be searched for");
  scanf("%d",&k);
 //code to implement bubble sort
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
   f=0;
   l=n;
   while(f<=l)
    {
     mid=(l+f)/2;
     if(*(a+mid)==k)
      {
       printf("\nSuccessful");
       c=1;
       break;
      }
     else
     if(*(a+mid)<k)
      f=mid+1;
     else
      l=mid-1;
    }
   if(c==0)
    printf("\nUnsuccessful");
 }
