// program to demonstrate base i/o function using different data types.
# include <stdio.h>
int main ()
{
    int age;
    float height;
    double salary;
     char grade;
    printf ("enter age,height,salary and grade");
    scanf ("%d %f %lf %c", &age, &height, & salary, &grade );
    printf("\ndetails: \nAge: %d\nHeight: %2f\nSalary: %2f\nGrade: %c\n", age, height, salary,grade);
    return 0; 

}