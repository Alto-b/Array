#include <stdio.h>

int main() {
    int n, i, j, k;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; ) {
            if (a[i] == a[j]) {
                for (k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    
    printf("Array after deleting duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
