#include<stdio.h>
int main()
{
  int A[3][3],B[3][3],C[3][3],i,j;
  printf("Enter values in matrix A : ");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      scanf("%d",&A[i][j]);
      
  printf("Enter values in matrix B : ");
  for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      scanf("%d",&B[i][j]);

  printf("\nSum of Matrix A and Matrix B :\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      C[i][j]=A[i][j]+B[i][j];
      printf("%d ",C[i][j]);
    }
    printf("\n");
  }
  return 0;
}
