#include<stdio.h>
int main(){
    int i,n,a[100];
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array elements ");
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("the array elements are:");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

}