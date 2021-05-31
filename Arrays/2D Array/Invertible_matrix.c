#include<stdio.h>
 int main(){
  int a[3][3], i, j;
  long determinant;
  printf("Enter the 9 elements of matrix:\n");
  for(i = 0 ;i < 3;i++)
    for(j = 0;j < 3;j++)
      scanf("%d", &a[i][j]);
  printf("\nThe matrix is\n");
  for(i = 0;i < 3; i++){
    for(j = 0;j < 3; j++)
        printf("%3d", a[i][j]);
      printf("\n");
  }
  determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[1][2]*a[2][1]))
              - a[0][1] * ((a[1][0] * a[2][2]) - (a[1][2] * a[2][0]))
              + a[0][2] * ((a[1][0] * a[2][1]) - (a[1][1] * a[2][0]));

   if ( determinant == 0)
       printf("\nMatrix is NOT invertible as determinant is zero");
   else
       printf("\nThe given matrix has an inverse");
   return 0;
}
