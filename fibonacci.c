#include <stdio.h>

int main() {
    int numTerms;
    
    // Prompt the user to enter the number of terms in the Fibonacci series
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &numTerms);

    long long firstTerm = 0, secondTerm = 1, nextTerm;
    
    // Display a message indicating the start of the Fibonacci series
    printf("Fibonacci Series up to %d terms: ", numTerms);
    
    for (int i = 1; i <= numTerms; i++) {
        if (i == 1) {
            // Special case: Display the first term
            printf("%lld ", firstTerm);
            continue;
        }
        if (i == 2) {
            // Special case: Display the second term
            printf("%lld ", secondTerm);
            continue;
        }
        
        // Calculate the next term in the Fibonacci series
        nextTerm = firstTerm + secondTerm;
        
        // Display the next term
        printf("%lld ", nextTerm);
        
        // Update the values of firstTerm and secondTerm for the next iteration
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }

    return 0;
}
