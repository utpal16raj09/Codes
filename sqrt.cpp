#include <iostream>

int sqrt(int x) {
    //If x is 0 or 1
    if (x < 2) {
        return x;
    }

    // Binary approach to find the square root
    int left = 1, right = x / 2;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long square = static_cast<long long>(mid) * mid; // Use long long to avoid overflow

        if (square == x) {
            return mid;
        } else if (square > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    // At this point, left > right, so the floor of the square root is right
    return right;
}

int main() {
    // Test cases
    std::cout << sqrt(4) << std::endl;   // Output: 2
    std::cout << sqrt(8) << std::endl;   // Output: 2
    std::cout << sqrt(16) << std::endl;  // Output: 4
    std::cout << sqrt(25) << std::endl;  // Output: 5
    std::cout << sqrt(30) << std::endl;  // Output: 5

    return 0;
}
