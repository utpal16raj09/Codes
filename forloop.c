#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter the range (a and b): ");
    
    // Validate and read input
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1; // Exit with an error code
    }
    
    if (a > b) {
        printf("Invalid range. 'a' must be less than or equal to 'b'.\n");
        return 1; // Exit with an error code
    }

    printf("Number\tWord\n");
    for (int i = a; i <= b; i++) {
        printf("%d\t", i);
        if (i >= 1 && i <= 9) {
            switch (i) {
                case 1:
                    printf("one\n");
                    break;
                case 2:
                    printf("two\n");
                    break;
                case 3:
                    printf("three\n");
                    break;
                case 4:
                    printf("four\n");
                    break;
                case 5:
                    printf("five\n");
                    break;
                case 6:
                    printf("six\n");
                    break;
                case 7:
                    printf("seven\n");
                    break;
                case 8:
                    printf("eight\n");
                    break;
                case 9:
                    printf("nine\n");
                    break;
            }
        } else if (i % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}
