#include<stdio.h>
int main()
{
  int A[3][3],B[3][3],C[3][3],i,j,k,sum=0;
  printf("Enter values in matrix A :\n");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      scanf("%d",&A[i][j]);

  printf("Enter values in matrix B :\n");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      scanf("%d",&B[i][j]);

  printf("\nProduct of Matrix A and Matrix B :\n");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
      sum=0;
      for(k=0;k<3;k++)
        sum+=A[i][k]*B[k][j];
      C[i][j]=sum;
    }
    for(i=0;i<3;i++){
      for(j=0;j<3;j++)
        printf("%d ",C[i][j]);
      printf("\n");
    }
  return 0;
}
