#include <stdio.h>

int main() {
    // Variables
    int num1, num2, sum;
    
    // Input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculation
    sum = num1 + num2;
    
    // Output
    printf("Sum: %d\n", sum);
    
    // Conditional Statement
    if (sum > 100) {
        printf("The sum is greater than 100.\n");
    } else {
        printf("The sum is not greater than 100.\n");
    }
    
    // Loop
    int i;
    for (i = 0; i < 5; i++) {
        printf("Iteration: %d\n", i);
    }
    
    return 0;
}
