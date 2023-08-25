#include<stdio.h>
int main(){
    int i,a[100],n,freq[100]={0},new=0,sum=0,avg=0;

    printf("size\n");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        freq[a[i]]++;
    }

    for(i=0;i<n;i++){
        if(freq[a[i]]==1)
        {
            a[new]=a[i];
            new++; 
        }
        
    }

printf("avg = :");
    for(i=0;i<new;i++){
       sum=sum+a[i];
    
    }
    avg=sum/new;
    printf("%d ",avg);

}