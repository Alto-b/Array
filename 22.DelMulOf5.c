
#include <stdio.h>

int main()
{
    int a[100],i,j,c,m,n;
    printf("enter the size");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        if(a[i]%5==0){
            if(i==n-1){
                n=n;
            }
            else if(i==n-2){
                n=n-1;
            }
            else{
                for(j=i;j<n;j++){
                    a[j+1]=a[j+3];
                    a[j+2]=a[j+4];
                
                }
                n=n-2;
            }
        }
    }
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    

    return 0;
}