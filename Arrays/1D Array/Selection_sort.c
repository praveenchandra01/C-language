#include<stdio.h>
int main()
{
  int n,min,temp;
  printf("Enter size : ");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
//Selection Sort
  for(int i=0;i<n-1;i++){ //moves the sorted araay
    min=i;
    for(int j=i+1;j<n;j++){ //Finds minimum element
      if(a[j]<a[min])
        min=j;
    }
      temp=a[i];
      a[i]=a[min];
      a[min]=temp;
    }
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);

  return 0;
}
