#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n=0,i=0,j=0;
    scanf("%d",&n);
    int a[n],cnst,day;

	cnst= 0;
	day = 0;    	
	
	
    for (i=0;i<n;i++)
    {
    	a[i]   = 0;
    }
        
    for (i=0;i<n;i++)
    {
    	scanf("%d",&cnst);
        scanf("%d",&day);
        for (j=1;j<=day;j++)
        a[i] += cnst * (1+(3*j*(j-1)));
        
    
	}
    
    for(i=0;i<n;i++)
    {     
        
        printf("%d\n",a[i]);   
	}
        
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
