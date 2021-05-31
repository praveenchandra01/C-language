#include<stdio.h>

int main()
{
	float c,f;
	printf("Enter temprature in celcius:\n");
	scanf("%f",&c);
	f=1.8*c+32;
	printf("temprature in fahrenhiet: %f",f);
	return 0;
	}