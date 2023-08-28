#include<stdio.h>
int main(){
    int i,j,a[100],temp,n,new=0;

    printf("size\n");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //reverse the array
    for(i=0,j=n-1;i<(n/2);i++,j--){
        
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        
    }
    //delete multiples of 3
    for(i=0;i<n;i++){
        if(a[i]%3!=0){
            a[new]=a[i];
            new++;
        }
    }
   
    
    for(i=0;i<new;i++){
        printf("%d",a[i]);
    }



}