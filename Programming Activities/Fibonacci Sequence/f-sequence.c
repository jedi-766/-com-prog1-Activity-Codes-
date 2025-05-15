/*
 * Program: Fibonacci Sequence
 * Author: Jed Ivan Alcala
 * Date: May 15, 2025
 * Description: This program prints the Fibonacci sequence up to n terms entered by the user.
 */

#include <stdio.h>

int main() { //entry point of the program
    // declarations of variables
    int n, firstnum = 0, secondnum = 1, next;

    // the program prompts the user to input how many fibonnaci terms to print
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    //prints a heading before displaying the sequence
    printf("Fibonacci sequence:\n");

    // loop runs from 1 to n, so it exactly
    for (int i = 1; i <= n; i++) {

        //prints the current fibonnaci number
        printf("%d\n", firstnum);

        //computes the next  fibonacci number
        next = firstnum + secondnum;

        //updates the first number to the second
        firstnum = secondnum;

        //moves the second number forward to the second.
        secondnum = next;

    }
    //end the program
    return 0;
}
