#include<stdio.h>

int main(void)
{
    float sem_grade, exam_grade, fin_grade;
    printf("sem_grade = ");
    scanf("%f", &sem_grade);
    printf("exam_grade = ");
    scanf("%f", &exam_grade);

    if(exam_grade > 5)
    {
        fin_grade = (0.4f * sem_grade) + (0.5f * exam_grade) + (0.1f * 10);
        if(fin_grade > 5)
            printf("True\n");
        else
            printf("False\n");
    }
    else
        printf("False\n");

    printf("fin_grade =  %.2f", fin_grade);
}