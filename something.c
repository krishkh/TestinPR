
#include <stdio.h>

int f(int n) {
    if (n == 0 || n == 1) return 1; else return n * f(n - 1);
}

int main() {
    int x; printf("Enter a number: "); 
    scanf("%d", &x);
    if (x < 0) { printf("Invalid input.\n"); return 1; }
    int r = f(x); printf("Factorial of %d is %d.\n", x, r);
    return 0;
}





#include <stdio.h>

// Function to calculate the factorial of a positive integer
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    unsigned long long result = factorial(num);
    printf("Factorial of %d = %llu\n", num, result);

    return 0;
}

# This code was changed by krish