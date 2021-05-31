#include<stdio.h>
int BinarySearch(int a[],int n,int elem)
{
  int l=0,r=n-1,mid;
  while(l<=r){
    mid=(l+r)/2;
    if(a[mid]==elem)
      return mid;
    else if(a[mid]<elem)
      l=mid+1;
    else if(a[mid]>elem)
    r=mid-1;
  }
    return -1;
  }
int main(){
  int n,elem,res;
  printf("Enter size : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter elements in array in sorted order : ");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the Element to be searched : ");
  scanf("%d",&elem);
  res=BinarySearch(a,n,elem);
  (res==-1)?printf("Element not found"):printf("Element Found at index %d",res);
  return 0;
}
