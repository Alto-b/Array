#include<stdio.h>
int main(){
    int i,a[100],n;

    printf("size\n");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //replace multiples of 5
    for(i=0;i<n;i++){
        if(a[i]%5==0){
            a[i]=10;
        }
    }
   
    
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }



}