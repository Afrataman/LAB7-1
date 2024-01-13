#include <stdio.h>

int main() {
   
    int A, B, temp;

    
    printf("Enter the value for A: ");
    scanf("%d", &A);

   
    printf("Enter the value for B: ");
    scanf("%d", &B);

  
    printf("Original values: A = %d, B = %d\n", A, B);

    temp = A;
    A = B;
    B = temp;

    printf("Values after swapping: A = %d, B = %d\n", A, B);

    return 0;
}

