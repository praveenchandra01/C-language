#include<stdio.h>
#include<string.h>
int index_of(char s[],char pat[])
{
  int m=strlen(s);
  int n=strlen(pat);
  for(int i=0;s[m-n];i++)
  {
    int j;
    for(j=0;j<n;j++)
    {
      if(s[i+j]!=pat[j])
        break;
    }
    if(j==n)
      return i;
  }
  return -1;
}
int Naive_algo(char s[],char pat[])
{
  int m=strlen(s);
  int n=strlen(pat);
  for(int i=0;i<m-n;i++)
  {
    int j;
    for(j=0;j<n;j++)
    {
      if(s[i+j]!=pat[j])
        break;
    }
    if(j==n)
      printf("Pattern found at index %d\n",i); //Print all occurring indexes
  }
}
int main()
{
  char str[20],pat[10];
  int i,index;
  printf("Enter string : ");
  gets(str);
  printf("Enter pattern to find its index : ");
  gets(pat);
  index=index_of(str,pat);
  if(index==-1)
    printf("Entered pattern not found ");
  else
    printf("pattern found at index %d\n",index);
  printf("\nNavie Algorithm\n");
  Naive_algo(str,pat);
  return 0;
}
// AAABAACAADAABAAABAA , AABA
