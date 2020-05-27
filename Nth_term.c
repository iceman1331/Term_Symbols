#include<stdio.h>

int nth_term(int n,int a, int b, int c)
{
	if (n==1)
	return a;
	if (n==2)
	return b;
	if (n==3)
	return c;
	
	if (n>3)
		return nth_term(n-1,a,b,c) + nth_term(n-2,a,b,c) + nth_term(n-3,a,b,c); 
}

int main()
{
	int n=0,a=0,b=0,c=0;
	scanf("%d",&n);
	scanf("%d %d %d",&a,&b,&c);

	printf("%d",nth_term(n,a,b,c));
	
	return 0;
}
