#include <stdio.h>

int main() {
  
    int studentID;
    float visa, final;

   
    printf("Enter Student ID: ");
    scanf("%d", &studentID);

    printf("Enter Visa (Midterm) Score: ");
    scanf("%f", &visa);

    printf("Enter Final Score: ");
    scanf("%f", &final);

    float passingGrade = 0.4 * visa + 0.6 * final;

   
    printf("Student ID: %d\n", studentID);
    printf("Passing Grade: %.2f\n", passingGrade);

    return 0;
}

