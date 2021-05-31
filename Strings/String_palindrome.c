#include<stdio.h>
int main()
{
  char str[20];
  int i,length=0;
  printf("Enter string to check whether it is palindrome or not : ");
  gets(str);
  while(str[length]!='\0')
    length++;
  // for(length=0;str[length];length++);
  for(i=0;i<length/2;i++)
  {
    if(str[i]!=str[length-1-i]){
      printf("%s is not a Palindrome",str);
      break;
    }
  }
  if(i==length/2)
    printf("%s is Palindrome",str);
  return 0;
}
