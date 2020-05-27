#include<stdio.h>

void num_to_alp(int a)
{
	int num[10] = {0,1,2,3,4,5,6,7,8,9};
	char *alp[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	
	int i=0;
	for (i=0;i<10;i++)
	{
		if (a==i)
		{
			printf("%s",alp[i]);
		}
	}
}


int main()
{
	int n=0;
	scanf("%d",&n);
	
	if (n<=9)
	num_to_alp(n);
	
	else printf("Greater than 9");
	return 0;
	
}
