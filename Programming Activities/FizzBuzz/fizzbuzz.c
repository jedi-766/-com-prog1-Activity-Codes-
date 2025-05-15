/*
 * Program: FizzBuzz Sequence Generator
 * Author: jedi-766
 * Date: May 15, 2025
 *
 * Description:
 * This program accepts a positive integer from the user and prints numbers
 * from 1 to that number. For multiples of 3, it prints "FIZZ" instead of the number.
 * For multiples of 5, it prints "BUZZ". For numbers that are multiples of both 3 and 5,
 * it prints "FIZZBUZZ". Otherwise, it prints the number itself.
 */

#include <stdio.h>

int main() {  //starting point of the program

     // declares an integer variable n that will store number.
    int n;

    //Asks the user to enter a number.
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    //This is a loop that starts at 1 and continues up to the number n.
    //It checks each number from 1 to n to see if it should print FIZZ, BUZZ, or the number itself.
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {   // && And operator, means divisible by both 3 and 5.
            printf("FIZZBUZZ\n");
        } else if (i % 3 == 0) {          // i % 3 == 0, checks if i divisible by 3.
            printf("FIZZ\n");
        } else if (i % 5 == 0) {          // i % 5 == 0, checks if i divisible by 5.
            printf("BUZZ\n");
        } else {
            printf("%d\n", i);
        }
    }
    // end the program successfully
    return 0;
}
