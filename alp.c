#include<stdio.h>
#include<math.h>
void num_to_alp(int p,int q)
{
    int n=0;
    if (q>9)
    {
    	for (n=p;n<=9;n++) 
    	{
    		printf("n==%d\n",n);
        	if (n==1)
        		printf("one\n");
    		if (n==2)
    	    	printf("two\n");
    		if (n==3)
        		printf("three\n");
    		if (n==4)
        		printf("four\n");
    		if (n==5)
    	    	printf("five\n");
    		if (n==6)
        		printf("six\n");
    		if (n==7)
        		printf("seven\n");
    		if (n==8)
        		printf("eight\n");
    		if (n==9)
        		printf("nine\n"); 
    	}
	}
    	
    else
	{	
		for (n=p;n<=q;n++) 
    	{
        	if (n==1)
        		printf("one\n");
    		if (n==2)
    		    printf("two\n");
    		if (n==3)
        		printf("three\n");
    		if (n==4)
        		printf("four\n");
    		if (n==5)
    	   		printf("five\n");
    		if (n==6)
        		printf("six\n");
    		if (n==7)
        		printf("seven\n");
    		if (n==8)
        		printf("eight\n");
    		if (n==9)
        		printf("nine\n"); 
    	}	
	}
       
}



int main()
{
    int a,b,i;
    scanf("%d",&a);
    scanf("%d",&b);

    num_to_alp(a,b);
    
    for (i=10;i<=b;i++)
    {
        if (i%2==0)
            printf("even\n");
        if (i%2!=0)
            printf("odd\n");
    }
}


