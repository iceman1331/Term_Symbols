#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int *marks, int nos, char gender) 
{
	int sum_mark=0,h=0;
	
	if (gender == 'g')
  		for (h=1;h<nos;h+=2)
  			sum_mark += marks[h];	
			  
  	if (gender == 'b')
  		for (h=0;h<=nos;h+=2)
  			sum_mark += marks[h];
		
  	return sum_mark;
}


int main() {
    int number_of_students;
    char gender;
    int sum;
    int student = 0;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
