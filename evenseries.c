#include<stdio.h>
int main()
{

 int n,i,c=0;
 int *p;
 printf("enter the limit:");
 scanf("%d",&n);
 p = &n;
 i = 0;
 for(i = 2;i<=*p;i = i+2)

 {
  if(i%2==0 && i<=n)
    {
        printf("%d",i);
     if (i < n)
     printf(",");
    } 
 }
 return 0;
}
