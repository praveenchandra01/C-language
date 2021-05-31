#include<stdio.h>
int main()
{
  int n,esum=0,osum=0;
  printf("Enter size of array : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter element in array : ");
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Array elements : ");
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);
  for(int i=0;i<n;i++)
  {
    if(a[i]%2==0)
      esum=esum+a[i];
    else
      osum=osum+a[i];
  }
  printf("\nSum of even number in array : %d\nSum of odd number in array : %d",esum,osum);
  return 0;
}
