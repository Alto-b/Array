#include <stdio.h>

int main() {
    int i, j, a[1000], freq[1000] = {0}, isUnique[1000] = {0}, temp, n, uniqueCount = 0;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;
        if (freq[a[i]] == 1) {
            isUnique[a[i]] = 1;
            uniqueCount++;
        }
    }

    printf("The sorted array is:\n");

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    printf("Unique elements and their frequencies:\n");
    for (i = 0; i < 1000; i++) {
        if (isUnique[i]) {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }

    printf("Total number of unique elements: %d\n", uniqueCount);

    return 0;
}
