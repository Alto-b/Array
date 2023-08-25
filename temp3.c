#include <stdio.h>

int main() {
    int i, n, sum = 0;
    char a[100]; // Changed the array data type to char

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]); // Change the scanf format specifier to %c
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            a[i] = '*'; // Replace odd numbers with an asterisk (*)
        } else {
            sum += a[i]; // Accumulate even numbers in the sum
        }
    }

    printf("Sum of even numbers = %d\n", sum);

    printf("Modified array:\n");
    for (i = 0; i < n; i++) {
        printf("%c\t", a[i]); // Print characters instead of integers
    }

    return 0;
}
