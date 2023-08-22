#include<stdio.h>
int main(){
    int i,j,n,a[100],temp;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array elements ");
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("the reversed array elements are:");
    for(i=0,j=n-1;i<(n/2);i++,j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }int co=0;
    printf("the reversed array elements are:");
    for(i=0;i<n;i++){
        if(a[i]%2!=0)
        co++;
        printf("%d\t",a[i]);
    }
    printf("\ncount of odd numbers: %d",co);


}