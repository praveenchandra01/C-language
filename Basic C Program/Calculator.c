#include<stdio.h>
int main()
{
  while(1)
  {
    int ch,a,b;
    printf("\nCalculator");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");

    printf("\n\nEnter your choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
      case 1:
        printf("\nEnter two numbers : ");
        scanf("%d%d",&a,&b);
        printf("Addition is %d\n",a+b);
        break;
      case 2:
        printf("\nEnter two numbers : ");
        scanf("%d%d",&a,&b);
        printf("Diffrence is %d\n",a-b);
        break;
      case 3:
        printf("\nEnter two numbers : ");
        scanf("%d%d",&a,&b);
        printf("Product is %d\n",a*b);
        break;
      case 4:
        printf("\nEnter two numbers : ");
        scanf("%d%d",&a,&b);
        printf("Quotient is %d\n",a/b);
        break;
      case 5:
        printf("****ThankYou!****");
        exit(0);
      default:
        printf("Invalid choice\n");
    }
  }
  return 0;
}
