//REPLACE ODD NUMBERS WITH * AND FIND SUM OF EVEN NUMBERS

#include<stdio.h>
int main()
{
    int i,n,a[100],sum;
    
    printf("enter size\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]%2!=0){
           a[i]= '*';
          // printf("*");
        }
        else if(a[i]%2==0){
            sum=sum+a[i];
        }
        }
        printf("sum=%d\n",sum);
        for(i=0;i<n;i++){
            printf("%d\t",a[i]);
        }   }
