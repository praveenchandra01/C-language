#include<stdio.h>
int main()
{
  int a[5];
  printf("Enter 5 values in array : ");
  for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
  int max=a[0];
  int min=a[0];
  for(int i=0;i<5;i++){
    if(a[i]>max)
      max=a[i];
  }
  for(int i=0;i<5;i++){
    if(a[i]<min)
      min=a[i];
  }
  printf("Max value: %d \nMin value: %d ",max,min);
  return 0;
}
