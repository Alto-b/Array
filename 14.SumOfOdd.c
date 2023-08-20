#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("enter the size array");
    scanf("%d",&n);

    printf("enter the array elements ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    
    for(i=0;i<n;i++){
        if(a[i]%2!=0)
        sum=sum+a[i];
    }
    printf("\n sum=%d",sum);
}