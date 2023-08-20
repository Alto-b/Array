#include<stdio.h>

int main() {
    int a[40], i, j, n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                // Shift elements to the left to remove the duplicate
                for (int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--; // Decrease the array size
                j--; // Stay at the same index to recheck the moved element
            }
        }
    }

    printf("The array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
