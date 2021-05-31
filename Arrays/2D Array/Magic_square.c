#include<stdio.h>
int main()
{
  int a[3][3],i,j,sum_d1=0,sum_d2=0,sum_r=0,sum_c=0,f=1;
  printf("Enter values in matrix :\n");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
     scanf("%d",&a[i][j]);

  printf("\nMatrix is :\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++)
     printf("%3d ",a[i][j]);
    printf("\n");
  }
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      if(i==j)
        sum_d1+=a[i][j];
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      if(i+j==2)
        sum_d2+=a[i][j];
  if(sum_d1!=sum_d2)
    f=0;
  else
  {
    for(i=0;i<3;i++)
    {
      sum_r=0;
      sum_c=0;
      for(j=0;j<3;j++)
      {
        sum_r+=a[i][j];
        sum_c+=a[j][i];
      }
    if(sum_r!=sum_d1)
      f=0;
    else if(sum_c!=sum_d1)
      f=0;
    else
      f=1;
  }
}
  if(f)
    printf("\nMagic square matrix");
  else
    printf("\nNot a magic square matrix");
  return 0;
}
