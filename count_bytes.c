#include<stdio.h>
int main()
{
 int n,count=0;
 printf("Enter the no :-");
 scanf("%d",&n);
 while(n|0!=0)
 {
   count++;
   n>>=1;
 }
 printf("NO of bytes = %d",count);
 return 0;
}
