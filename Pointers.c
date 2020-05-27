#include<math.h>
#include<stdio.h>

void update(int *a,int *b) 
{
    int temp_one = *a,temp_two = *b;
    printf("function  %d %d\n",temp_one ,temp_two );
	*a = temp_one + temp_two;
    if (temp_one >= temp_two) *b = temp_one - temp_two;
    if (temp_one <  temp_two)  *b = temp_two - temp_one ; 

    // Complete this function    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


