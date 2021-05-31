#include<stdio.h>
void MergeArray(int a[], int m,int b[], int n,int c[])
{
  int i;
  for(i=0;i<m;i++)
    c[i]=a[i];
  for(i=0;i<n;i++)
    c[m+i]=b[i];
  printf("Merged array\n");
  for(i=0;i<m+n;i++)
    printf("%d ",c[i]);
}
int main()
{
  int m,n,i,j;
  printf("Enter sizes of two array :");
  scanf("%d%d",&m,&n);
  int a[m],b[n],c[m+n];
  printf("Enter elements in first array :");
  for(i=0;i<m;i++)
      scanf("%d",&a[i]);
  printf("Enter elements in second array :");
  for(i=0;i<n;i++)
      scanf("%d",&b[i]);
  MergeArray(a,m,b,n,c);
  return 0;
}
