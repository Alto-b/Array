#include<stdio.h>
int main(){
    int i,j,temp,c,a[10],n;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<n;j++)
        {

            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
    }
    printf("sorted array is \n");
    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
    }
    printf("\n");
     printf("prime numbers are :\n");
    for(i=0;i<=n;i++){
        c=0;
        for(j=1;j<=a[i];j++){
            if(a[i]%j==0){
                c++;
            }
        }
        if(c==2)
            printf("%d\t",a[i]);
        }
}