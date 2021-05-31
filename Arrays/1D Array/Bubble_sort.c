#include<stdio.h>
int main()
{
  int n,temp,isSorted=1;
  printf("Enter Size :");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    //Bubble Sort
  for(int i=0;i<n-1;i++) //For no. of passes
  {
    printf("Working on pass %d\n",i+1);
    // isSorted=1;
    for(int j=0;j<n-1-i;j++) //For comparisons in each pass
    {
      if(a[j]>a[j+1])
      {

        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        isSorted=0;
      }
    }
    if(isSorted)
      break;
  }
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
}
