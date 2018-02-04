#include<stdio.h>
#include<math.h>
int main()
{
  int n,count=0,temp,sum=0,j=0;
  printf("Enter the no :-");
  scanf("%d",&n);
  temp=n;
  while(n|0!=0)
  {
    count++;
    n>>=1;
  }
  int N[count];
  for(int i=count-1;i>=0;i--)
  {
    N[i]=temp%2;
    temp/=2;
    printf("N[%d] = %d\n",i,N[i]);
  }
  for(int i=0;i<count;i++)
  {
    if(N[i]==0)
    {
      N[i]=1;
    }
    else
    {
      N[i]=0;
    }
  }
  printf("Compliment :-");
  for(int i=0;i<count;i++)
  {
    printf("%d",N[i]);
  }
  for(int i=(count-1);i>=0;i--)
  {
    sum+=(N[i]*pow(2,j));
    j++;
  }
  printf("\nCompliment no :- %d",sum);
 return 0;
}
