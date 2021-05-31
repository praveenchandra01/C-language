#include<stdio.h>
#include<conio.h>
// int a,b,c;    //global var initial with zero by default
int main()
{
    int a,b,c;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum of %d and %d is : %d",a,b,c);
    return 0;
    getch();

}
