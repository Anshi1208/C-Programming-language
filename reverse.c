#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Logic to reverse the number
    while (num != 0) {
        remainder = num % 10;          // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Append it to the reversed number
        num /= 10;                     // Remove the last digit from the original number
    }

    // Output the reversed number
    printf("Reversed Number: %d\n", reversedNum);

    return 0;
}
