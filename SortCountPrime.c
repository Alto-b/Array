#include<stdio.h>
int main(){
    int i,j,n,a[100],c=0,temp;
    
    printf("enter the array size\n");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
             }

            
        }
        for(j=i+1;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                 c++;
             }
             printf("\n No of prime elements:%d",c);
        }
    }
    printf("\nthe sorted array is \n");
    for(i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
     printf("\n No of prime elements:%d",c);
}