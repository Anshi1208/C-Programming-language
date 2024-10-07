#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }
    
    // Check divisibility from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // If divisible, not a prime number
        }
    }
    
    return 1;  // If no divisors are found, it's a prime number
}

int main() {
    int number;
    
    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    // Call the isPrime function
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    
    return 0;
}
