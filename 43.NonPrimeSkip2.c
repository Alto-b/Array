#include<stdio.h>
int main(){
    int i,j,n,a[100],flag;

    printf("enter size of array\n");
    scanf("%d",&n);

    printf("enter array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        flag=1;
        if(a[i]<=1){
            flag=0;
        }
        else{
              for(j=2;j*j<=a[i];j++){
            if(a[i]%j==0){
                flag=0;
                break;
            }}
        }
        if(flag==0){
            for(j=1;j<=2;j++){
            a[i+j]=a[i+j+2];
           
        }
        n=n-2;
        }
    }
    printf("new array");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}



