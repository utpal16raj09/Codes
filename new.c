#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int sum = 0;
    int temp = n;

    // Calculate the sum of the digits
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of the digits of %d is %d\n", n, sum);

    return 0;
}
