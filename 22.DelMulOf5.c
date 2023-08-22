#include<stdio.h>
int main(){
    int n,i,a[100],new=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the array elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%5!=0)
        {
            
            a[new]=a[i];
            new++;
           
        }
        }

        for(i=0;i<new;i++){
         printf("\t%d",a[i]);
        }
    
}