#include<stdio.h>
int main()
{
	float a,b,c,d,e,f;
	printf("Enter marks of the student for five subjects");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("the percentage of the student is %f",f);
	return 0;
}
