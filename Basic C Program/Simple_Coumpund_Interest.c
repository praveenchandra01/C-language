#include<stdio.h>
#include<math.h>

int main()
{   
  float p,r,t,q,si,ci;
	printf("Enter principle value:");
	scanf("%f",&p);
	printf("Enter interest rate: ");
	scanf("%f",&r);
	printf("Enter time in period in year:");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("Simple intrest: %f",si);
	q=(1+r/100);
	ci=p*pow(q,t);
	printf("\nCompound intrest:%f",ci);
  return 0;
	}