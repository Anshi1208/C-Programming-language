#include <stdio.h>

// Function to reverse the number
int reverseNumber(int num) {
    int reversed = 0, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    
    // Prompt user for input
    printf("Enter an integer: ");
    
    // Error handling for valid input
    if (scanf("%d", &num) != 1) {
        printf("Invalid input! Please enter a valid integer.\n");
        return 1;  // Exit the program if input is invalid
    }
    
    // Check if the number is a palindrome
    if (num == reverseNumber(num)) {
        printf("%d is a Palindrome number.\n", num);
    } else {
        printf("%d is not a Palindrome number.\n", num);
    }
    
    return 0;
}
