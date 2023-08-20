#include<stdio.h>
int main(){
    int i,n,j,c=0,a[100];
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array elements ");
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("prime numbers are :\n");
    for(i=0;i<=n;i++){
        c=0;
        for(j=1;j<=a[i];j++){
            if(a[i]%j==0){
                c++;
            }
        }
        if(c==2)
            printf("%d\t",a[i]);
        }

}