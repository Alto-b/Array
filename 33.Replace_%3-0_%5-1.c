
//replace multiples of 3 by 0 and multiples of 5 by 1

#include<stdio.h>
int main(){
    int i,j,a[100],n;

    printf("size\n");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        if(a[i]%3==0)
            a[i]=0;
        
        else if(a[i]%5==0)
            a[i]=1;
    }
   
    
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }


    }
