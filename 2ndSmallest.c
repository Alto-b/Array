#include <stdio.h>
#include <limits.h>

int main() {
    int a[100], i, n, l1, l2;

    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    l1 = INT_MAX;
    l2 = INT_MAX;

    for (i = 0; i < n; i++) {
        if (a[i] < l1) {
            l2 = l1;
            l1 = a[i];
        } else if (a[i] < l2 && a[i] > l1) {
            l2 = a[i];
        }
    }

    printf("\nThe smallest element is %d", l1);
    printf("\nThe 2nd smallest element is %d", l2);

    return 0;
}
