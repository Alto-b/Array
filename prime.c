#include <stdio.h>

int main() {
    int a[100], j, i, n, sum = 0,flag;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Prime numbers in the array: ");
    for (i = 0; i < n; i++) {
         flag = 1; // Assume the number is prime initially
        
        if (a[i] <= 1) {
            flag = 0; // 0 and 1 are not prime
        } else {
            for (j = 2; j * j <= a[i]; j++) {
                if (a[i] % j == 0) {
                    flag = 0; // Found a divisor, so it's not prime
                    break;
                }
            }
        }
        
        if (flag) {
            printf("%d ", a[i]);
            sum += a[i];
        }
    }
    
    printf("\nSum of prime numbers: %d\n", sum);

    return 0;
}
