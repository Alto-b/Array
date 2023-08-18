#include<stdio.h>
int main(){
    int i,n,a[100],pos;
    printf("enter the array size");
    scanf("%d",&n);
    printf("enter the array elements ");
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("the array elements are:");
    for(i=0;i<n;i++){
        printf("\n%d\t",a[i]);
    }

    printf("\nenter the position to be deleted");
    scanf("%d",&pos);

    if(pos >=n || pos<0){
        printf("\ninvalid");
    }
    else
    {
        for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
        }
         n--;

            printf("\nthe new array is:");
            for(i=0;i<n;i++){
             printf("\n%d\t",a[i]);
        }
    }
   

}