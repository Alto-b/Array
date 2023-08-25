#include<stdio.h>

int main() {
    int i, j = 0, k = 0, n, a[100], b[100], c[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            b[j] = a[i];
            j++;
        } else {
            c[k] = a[i];
            k++;
        }
    }

    printf("Odd array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }

    printf("\nEven array: ");
    for (i = 0; i < j; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
