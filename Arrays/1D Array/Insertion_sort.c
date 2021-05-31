#include<stdio.h>
int main()
{
  int n,j,key;
  printf("Enter size : ");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    //Insertion Sort
  for(int i=1;i<n;i++){
    key=a[i];
    j=i-1;
    while(a[j]>key && j>=0){
      a[j+1]=a[j];
      j--;
    }
    a[j+1]=key;
  }
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
}
