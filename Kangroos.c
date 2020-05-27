#include<stdio.h>
#include<math.h>

int main()
{
	int a1=0,a2=0,v1=0,v2=0;
	
	scanf("%d",&a1);
	scanf("%d",&v1);
	scanf("%d",&a2);
	scanf("%d",&v2);
	
	
	if(a2 > a1 && v2 > v1)
		printf("NO");
	
	else
	{
		float J = (a1 - a2)/(v2-v1);
		if (J>=0)
			printf("YES");
	}
	
	return 0;
}
