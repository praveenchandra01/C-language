#include<stdio.h>
int main()
{
  void *p;
  int x=5;
  double y=3.14;
  p=&x;
  // printf("x=%d",*p); //pointer cannot determine how may block are there after base add. bcoz pointer is of void type
  printf("x=%d",*(int*)p);

  p=&y;
  // printf("\ny=%lf",*p);
  printf("\ny=%lf",*(double*)p);
  return 0;
}


// Pointer contains address of variable which is of same type as type of pointer,this helps the pointer to determine 
// no. blocks after base address
