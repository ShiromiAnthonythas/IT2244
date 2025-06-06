/*write a C program to generate and print the Fibonacci series up to a specified number of terms, 
the program should take the number of term as input from the user 
and the display the corresponding Fibonaccisequence*/

 

#include <stdio.h>
void fibonacci(int n) {
    int first = 0, second = 1, next;   
    printf("Fibonacci Series: ");
    
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}
int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    if (terms <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        fibonacci(terms);
    }
    return 0;
}
