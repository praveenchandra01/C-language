#include<stdio.h>
#include<string.h>
int compare_ignore_case(char str1[], char str2[])
{
  int l1=strlen(str1);
  int l2=strlen(str2);
  int i;
  if(l1==l2)
  {
    for(i=0;i<l1;i++)
    {
      if(str1[i]!=str2[i])
        return 0;
    }
    if(i==l1)
      return 1;
  }
}
int main()
{
  char str1[20],str2[20];
  int res;
  printf("Enter first string :\n");
  gets(str1);
  printf("Enter second string :\n");
  gets(str2);
  res=compare_ignore_case(str1,str2);
  if(res==1)
    printf("Given stings are same");
  else
    printf("Given stings are not same");

  return 0;
}
