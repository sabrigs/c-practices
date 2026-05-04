#include <stdio.h>

// Global variables
int sum_grade = 0;
int grades = 0;

// Functions prototypes
void ask_grade(int i);
float cal_average(void);

int main(void)
{
    printf("How many grades? ");
    scanf("%i", &grades);

    for(int i = 1; i <= grades; i++)
    {
        ask_grade(i);
    }
    
    return cal_average();
}

// Functions
// Ask grade and store the results
void ask_grade(int i)
{
    float grade;
    printf("✦ Grade %i: ", i);
    scanf("%f", &grade);
    sum_grade = sum_grade + grade;
}

// Calculate grades average
float cal_average(void)
{
    float average = (float) sum_grade / grades;
    printf("Grade's average: %.2f\n", average);
    return average;
}