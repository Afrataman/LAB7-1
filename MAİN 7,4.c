#include <stdio.h>
#include <math.h>

int main() {
 
    float radius;
    int operationType;

 
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Enter the operation type (1 for perimeter, 2 for area): ");
    scanf("%d", &operationType);

 
    if (operationType == 1) {
   
        float perimeter = 2 * M_PI * radius;
        printf("Perimeter of the circle: %.2f\n", perimeter);
    } else if (operationType == 2) {
     
        float area = M_PI * pow(radius, 2);
        printf("Area of the circle: %.2f\n", area);
    } else {
       
      printf("Invalid operation type. Please enter 1 for perimeter or 2 for area.\n");
    }

    return 0;
}
