#include<stdio.h>
int main(){
    int a[40],pos,num,i,n;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array elements ");
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }


    printf("enter the position of element to be inserted");
    scanf("%d",&pos);

    printf("enter the element to be inserted");
    scanf("%d",&num);
        n++;
    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
        a[pos-1]=num;
        
        
    }
    
    printf("the array elements are:");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }

}