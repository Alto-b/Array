#include <stdio.h>

int main() {
    int n, i, j, k,new=0,sum=0,avg=0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            a[new]=a[i];
            new++;
        }
           }
    for(i=0;i<new;i++){
        sum=sum+a[i];
        printf("%d ",a[i]);
    }
    printf("avg=%d",sum/new);
}
