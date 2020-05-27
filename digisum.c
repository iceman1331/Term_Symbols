#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int digit(int p)
{
	int sum=0;
	while(p>=10)
	{
		int q = p%10;
			p = (p/10);
		sum+=q;
	}
	sum+=p;
	
	return sum;
}


int main() 
{
    int n,e=0;
    scanf("%d", &n);
    e = digit(n);
    printf("%d",e);
	
	return 0;
}
