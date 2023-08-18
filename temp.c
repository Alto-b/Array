#include <stdio.h>

int main() {
    int i, j, n, a[100], temp;
    printf("Enter the array size: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Reversing the second half of the array
    for (i = n / 2, j = n - 1; i < j; i++, j--) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    printf("The array with reversed second half: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    
    return 0;
}
