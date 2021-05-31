#include<stdio.h>
#include<string.h>
int main()
{
  char str1[20],str2[20];
  int i,len1=0,len2=0,same=1;
  printf("Enter first String :");
  gets(str1);
  printf("Enter second String :");
  gets(str2);
  len1=strlen(str1);
  len2=strlen(str2);
  if(len1==len2)
  {
    for(i=0;str1[i];i++)
    {
      if(str1[i]!=str2[i])
      {
        printf("%s and %s are not equal strings",str1,str2);
        break;
      }
    }
  }
  if(i==len1)
    printf("%s and %s are equal strings",str1,str2);
  return 0;
}
