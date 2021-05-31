#include<stdio.h>
int main()
{
	int F=0,S=1,T,n;
	printf("\nEnter the no. of terms:");
	scanf("%d",&n);
	printf("%d",F);
	printf("\n");
	printf("%d",S);

	printf("\n");
	for(int i=2;i<n;i++)
    {
			T=F+S;
			F=S;
			S=T;
			printf("%d",T);
			printf("\n");
    }
		return 0;

  }
