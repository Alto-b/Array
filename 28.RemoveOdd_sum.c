//replace all prime numbers by 0 and even numbers by 1
#include<stdio.h>
int main(){
    int i,a[100],n,new=0,sum=0;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    
   for(i=0;i<n;i++){
    if(a[i]%2==0){
        a[new]=a[i];
        new++;
    }
    
   }
  // n=n-2;
   //printf("c%d",c);

   for(i=0;i<new;i++){
    
    sum=sum+a[i];

   }
    printf("sum : %d",sum);
   for(i=0;i<new;i++){
    
    printf("\n%d",a[i]);
   }
  

}