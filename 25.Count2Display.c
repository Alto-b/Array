
#include <stdio.h>

int main() {
    int i, n, a[100], freq[100] = {0};

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }

    printf("Numbers repeated exactly twice are:\n");
    for (i = 0; i < n; i++) {
        if (freq[a[i]] == 2) {
            printf("%d ", a[i]);
            freq[a[i]] = 0; // To avoid printing duplicates in case of more than 2 repetitions
        }
    }

    return 0;
}
