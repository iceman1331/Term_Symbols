#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int n,i,j;
	int a[i],b[i];
	
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i],&b[i]);	
	
	for (i=0;i<n;i++)
	{
		int car[1000],chk=0,carr=0;
		while(a[i]>0 && b[i]>0)
		{
			carr=((a[i]%10)*(b[i]%10));
			
			if (carr>=10)
			{
				car[chk] = carr/10;
				chk++;
			}
			
			a[i]=a[i]/10;
			b[i]=b[i]/10;
		}
		printf("%d ",chk);
		for(j=0;j<chk;j++)
		printf("%d",car[j]);
		
		printf("\n");
	}
    return 0;
}
