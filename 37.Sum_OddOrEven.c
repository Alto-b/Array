//merge 2 arrays

#include<stdio.h>
int main(){
    int i,n,sum=0,a[100],new=0;
    printf("enter size of array \n");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    //printf("sum = %d\n",sum );

    if(sum>100){
        
        for(i=0;i<n;i++){
            if(a[i]%2!=0){
            a[new]=a[i];
            new++;
        }
        }
        }
    
    else if(sum<100){
        
         for(i=0;i<n;i++){
            if(a[i]%2==0){
            a[new]=a[i];
            new++;
    }

        }

    }

    for(i=0;i<new;i++)
        printf("%d",a[i]);
    
}