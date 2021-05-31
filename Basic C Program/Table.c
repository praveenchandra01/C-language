
#include<stdio.h>
int main()
{
	int num,i;
	printf("\nENTER THE NO. WHOSE TABLE YOU WANT:");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	printf("\n%d X %d = %d",num,i,num*i);
	return 0;

}
