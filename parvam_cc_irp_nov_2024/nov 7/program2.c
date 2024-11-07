#include <stdio.h>
struct StudentData {
    float eng;     
    float phy;     
    float chem;    
    float total;  
    float average; 
    float percentage; 
};

int main() {

    struct StudentData student;

    printf("Enter the marks for three subjects (English, Physics, Chemistry):\n");


    scanf("%f %f %f", &student.eng, &student.phy, &student.chem);

    student.total = student.eng + student.phy + student.chem;
    student.average = student.total / 3.0;
    student.percentage = (student.total / 300.0) * 100;


    printf("Total marks = %.2f\n", student.total);
    printf("Average marks = %.2f\n", student.average);
    printf("Percentage = %.2f%%\n", student.percentage);  

    return 0; 
}
