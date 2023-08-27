#include <stdio.h>
int main(){
    char operator;
    float num1, num2, result;

    printf("Enter an operator (+, -, *, /):");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operator){
        case '+' :
            result = num1 + num2;
            break;
        case '-' :
            result = num1 - num2;
            break;
        case '*' :
            result = num1 * num2;
            break;
        case '/' :
        if (num2 != 0) {
            result = num1 / num2;
        }else {
            printf ("ERROR! Can not divide by zero\n");
            return 1 ; //Exit with an error status
        }
            break;
        default:
            printf ("Invalid Operation\n");
            return 1 ; //Exit with an error status
    }
    printf ("Result: %f\n", result);
    return 0; //Exit successfully
}