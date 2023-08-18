#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
float div(float a,float b);
	
int main()
{
	int a,b;
	printf("\n Enter the no a :");
	scanf("%d",&a);
	
    printf("\n Enter the no b:");
	scanf("%d",&b);
	
	printf("\n\n addition of %d and %d : %d",a,b,add(a,b));
	printf("\n\n substraction of %d and  %d : %d",a,b,sub(a,b));
	printf("\n\n multiplication of %d and %d : %d",a,b,mul(a,b));
	printf("\n\n division of %d and %d : %.2f",a,b,div(a,b));
	
	return 0;
}

int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
float div(float a,float b)
{
	return a/b;
}