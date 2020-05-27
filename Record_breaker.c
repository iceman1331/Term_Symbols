#include<stdio.h>
#include<math.h>

int main()
{
	int n=0;
	scanf("%d",&n);
	int Game[n],i=0;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&Game[i]);
	}
	
	int Min,Max;
	Min=Game[0];
	Max=Game[0];
	
	int a[n];
	int b[n];
	
	printf(" Min    Max");
	
	for(i=0;i<n;i++)
	{
		if(Min>Game[i])
		{
			Min=Game[i];
			a[i]++;
		}
		
		if(Max<Game[i])
		{
			Max=Game[i];
			b[i]++;
		}
		
		
	//printf("\n  %d\t%d , Min=%d Max=%d\n",min,max,Min,Max);
	}
	
	printf(" %d\t%d",a,b);
	
	//printf("\n\n  %d\t%d\n\n",min,max);
	for(i=0;i<n;i++)
	printf("\n %d %d\n",a[i],b[i]);
	
	
	return 0;
}
