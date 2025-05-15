/*Program: Collatz Sequence
 * Author: jedi-766
 * Date: May 15, 2025
 *
 * Description:
 * This program generates the Collatz sequence starting from a positive integer entered by the user.
 */
#include <stdio.h>

int main() {    // starting point of the program
    int n;      //to store a number

    // Asks the user to enter a number
    printf("Enter a number:\n");
    scanf("%d", &n);

    // Generate and print the Collatz sequence
    while (n != 1) {
        if (n % 2 == 0) {
            // If number is even, divide by 2
            n = n / 2;
        } else {
            // If number is odd, multiply by 3 and add 1
            n = 3 * n + 1;
        }
        printf("%d\n", n); // Print the current number
    }

    return 0;   // end the program
}
