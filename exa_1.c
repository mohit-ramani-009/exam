#include <stdio.h>
#define m pritnf
#define d scanf
main() 
{
    int marks[5];
    int i, sum = 0;
    float average;
    
    printf("Enter marks for 5 subjects:\n\n");
    
    for (i = 0; i < 5; i++) 
	{
        printf("Enter marks for subject %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = (float)sum / 5;
    
    printf("Average marks: %.2f\n", average);

    if (average >= 90) 
	{
        printf("Grade:-A\n");
    } 
	else if (average >= 80) 
	{
        printf("Grade:-B\n");
    } 
	else if (average >= 70) 
	{
        printf("Grade:-C\n");
    } 
	else if (average >= 60) 
	{
        printf("Grade:-D\n");
    } 
	else {
        printf("Grade:- F\n");
    }
}

