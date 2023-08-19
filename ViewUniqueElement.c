

#include<stdio.h>
int main(){
    int a[40],j,k,i,n;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array elements ");
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n;k++){
                    a[k]=a[k+1];
                    printf("%d",a[5]);
                }
                n--;j--;
            }
        }
    }

    printf("the array elements are:");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }

}