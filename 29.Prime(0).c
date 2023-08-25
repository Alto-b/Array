//replace all prime numbers by 0 
#include<stdio.h>
int main(){
    int i,j,a[100],n,c;
    printf("enter the size");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    
   for(i=0;i<n;i++){
    c=0;
        for(j=1;j<=a[i];j++){
            if(a[i]%j==0)
              c++;
    
     
    
    }
   if(c==2)
        a[i]=0;
   }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
   
 
}