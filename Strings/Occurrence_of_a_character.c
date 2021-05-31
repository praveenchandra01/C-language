#include<stdio.h>
int main()
{
  char str[20],ch;
  int i=0,c=0;
  printf("Enter string :\n");
  gets(str);
  printf("Enter character : ");
  scanf("%c",&ch);
  // for(i=0;str[i];i++){
  //   if(ch==str[i])
  //     c++;
  // }
  // while(str[i]!='\0'){
  while(str[i]){
    if(ch==str[i])
      c++;
    i++;
  }
  printf("%d",c);
  return 0;
}
