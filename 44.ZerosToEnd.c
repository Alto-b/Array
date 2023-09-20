#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int i, j;
    for (i = 0; i < n; i++) {
        if (arr[i] == 0) {
            for (j = i + 1; j < n; j++) {
                if (arr[j] != 0) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
            }
        }
    }

    printf("Array after moving zeros to the end:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
