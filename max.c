#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int max = a; // Assume 'a' is the maximum initially
    
    if (b > max) {
        max = b;
    }
    
    if (c > max) {
        max = c;
    }
    
    if (d > max) {
        max = d;
    }
    
    return max;
}

int main() {
    int a, b, c, d;
    
    // Input
    printf("Enter four integers, one on each line:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    
    // Call the function and print the result
    int result = max_of_four(a, b, c, d);
    printf("The greatest of the four integers is: %d\n", result);
    
    return 0;
}
