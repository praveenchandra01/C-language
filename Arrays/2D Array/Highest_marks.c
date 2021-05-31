#include<stdio.h>
int main()
{
  int a[5][10],i,j,max_r,max;

  for(i=0;i<5;i++){
    printf("\nEnter marks of 10 students of class %d : ",i+1);
    for(j=0;j<10;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<5;i++){
    max_r=a[i][0];
    for(j=0;j<10;j++){
      if(a[i][j]>max_r){
        max_r=a[i][j];
      }
    }
    printf("\nMaximum marks in class %d is %d ",i+1,max_r);
  }
  max=a[0][0];
  for(i=0;i<5;i++){
    for(j=0;j<10;j++){
      if(a[i][j]>max){
        max=a[i][j];
      }
    }
  }
  printf("\nMaximum marks among all classes %d ",max);
  return 0;
}
