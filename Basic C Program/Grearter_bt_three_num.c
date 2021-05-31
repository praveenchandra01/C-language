#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three numbers :");
  scanf("%d%d%d",&a,&b,&c);
  // printf("%d is Greater",a>b?a>c?a:c:b>c?b:c);
  if(a>b && a>c)
  {
    printf("%d is Greater",a);
  }
  else if (b>c)
  {
    printf("%d is Greater",b);
  }
  else
  {
    printf("%d is Greater",c);
  }
  return 0;
}
