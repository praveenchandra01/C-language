#include<stdio.h>
int square(int x){
  return x*x;
}
int cube(int x){
  return x*x*x;
}
int calculate(int (*p) (int),int n){ //p points to square fun having only one arg.
  return(p(n)); 
}
int main()
{
  int ch,n;
  printf("1. Square\n");
  printf("2. Cube\n");
  printf("Enter your choice : ");
  scanf("%d",&ch);
  printf("Enter number : ");
  scanf("%d",&n);

  switch(ch)
  {
    case 1:
      printf("Square is %d",calculate(square,n)); //add. of square fun is passed
      break;
    case 2:
      printf("Cube is %d",calculate(cube,n));
      break;
  }
  return 0;
}
