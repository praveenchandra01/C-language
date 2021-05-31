#include<stdio.h>
int main()
{
  int n,elem,flag=0;
  printf("Enter size : ");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Enter Element to be searched : ");
  scanf("%d",&elem);

  for(int i=0;i<n;i++){
    if(a[i]==elem)
      flag=i;
}
if(flag)
  printf("Element found at index %d",flag);
else
  printf("Element not Found");
  return 0;
}
