#include <stdio.h>

int main() {
   
    int amount;

 
    printf("Enter the amount of money (multiples of 10): ");
    scanf("%d", &amount);


    if (amount % 10 != 0) {
        printf("Invalid amount. Please enter multiples of 10.\n");
        return 1; // Exit the program with an error code
    }

 
    int num100 = amount / 100;
    int num50 = (amount % 100) / 50;
    int num20 = ((amount % 100) % 50) / 20;
    int num10 = (((amount % 100) % 50) % 20) / 10;

   
    printf("Amount: %d\n", amount);
    printf("Number of 100 banknotes: %d\n", num100);
    printf("Number of 50 banknotes: %d\n", num50);
    printf("Number of 20 banknotes: %d\n", num20);
    printf("Number of 10 banknotes: %d\n", num10);

    return 0;
}

