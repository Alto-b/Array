#include <stdio.h>
int main()
{
    int a[100], n, i, j, c;
    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        printf("\t%d", a[i]);
    }


    for (i=0;i<n-1;i++) {
        c=1;
        for (j=i+1;j<n;j++) { 
            if (a[i]==0)
                continue;
            if (a[i]==a[j]) {
                c++;
                a[j]=0;
            }
        }
        if (c>1)
            printf("\n %d repeated %d times", a[i], c);
    }















    
}
