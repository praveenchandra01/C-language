#include<stdio.h>
int main()
{
  int a[10];
  int s=0;
  float avg;
  printf("Enter marks : ");
  for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
  for(int i=0;i<5;i++)
    printf("%d ",a[i]);
  for(int i=0;i<5;i++)
    s=s+a[i];
  avg=s/5.0;
  printf("\nAverage : %f",avg);
  return 0;
}
