#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m[3],i;
	for (i=0;i<3;i++)
		scanf("%d",&m[i]);
	
	for (i=0;i<3;i++)
		printf("%d ",(*m+i));
}
