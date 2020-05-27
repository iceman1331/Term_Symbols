#include<stdio.h>
#include<stdlib.h>
	
int sum(int a,int b,int c,int n)
{
	int Sum =0;
	if (n==1)
		return n = a;
	if (n==2)
		return n = a+b;
	if (n==3)
		return n = a+b+c;
		
	if (n>3)
	return n = sum(a,b,c,n-1);
	  
}

int main()
{
	int a,b,c,n;
	scanf("%d",&n);
	scanf("%d %d %d",&a,&b,&c);
	
	int UM =  sum(a,b,c,n);
	
	printf("%d ",UM);
	return 0;
}
