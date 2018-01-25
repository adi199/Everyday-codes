#include<stdio.h>
#include<string.h>
int main()
{
  char S[20];
  char ch;
  printf("Enter any string:-");
  scanf("%s",&S);
  int j=strlen(S)-1;
  int count=0;
  for(int i=0;i<strlen(S);i++)
  {
    ch=S[j];
    if(ch==S[i])
    {
      count++;
      j--;
    }
    else
    {
      j--;
      continue;
    }
  }
  if(count==strlen(S))
  {
    printf("Entered string is paradrome");
  }
  else
  {
    printf("Entered string is not paradrome");
  }
  return 0;
}
