#include<stdio.h>
#include<string.h>
int main()
{
  char str[5][10],s[10];
  int i,j,r;
  printf("Enter five strings : \n");
  for(i=0;i<5;i++)
    gets(str[i]);

  for(i=0;i<4;i++)
  {
    for(j=0;j<4-i;j++)
    {
      r=strcmp(str[j],str[j+1]); 
        if(r>0)
        {
          strcpy(s,str[j]);
          strcpy(str[j],str[j+1]);
          strcpy(str[j+1],s);
        }
    }
  }
  printf("\nStrings in dictionary order :\n");
  for(i=0;i<5;i++)
      puts(str[i]);
  return 0;
}
