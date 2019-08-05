#include<stdio.h>
#include<malloc.h>
void main()
 {
  int *a,*b,i,j,n,m;
  printf("\nEnter the array size of first array");
  scanf("%d",&n);
  printf("\nEnter the array size of second array");
  scanf("%d",&m);
  printf("\nEnter the first array");
  a=(int *)malloc((n+m)*sizeof(int));
  for(i=0;i<n;i++)
   {  
    printf("\nEnter the number at %d",i+1);
    scanf("%d",(a+i));
   }
  printf("\nEnter the second array");
  b=(int *)malloc(m*sizeof(int));
  for(i=0;i<m;i++)
   {
    printf("\nEnter the number at %d",i+1);
    scanf("%d",(b+i));
   }
  j=0;
for(i=n;i<m+n;i++)
{
 *(a+i)=*(b+j);
j++;
}
for(i=0;i<(m+n);i++)
 {
  printf("%d ",*(a+i));
}
  

 } 
