//factorial of largest element

#include<stdio.h>
int main(){
    int i,j,n,l=0,a[100],fact=1;
    printf("enter size of array \n");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>l){
            l=a[i];
        }
    }
    for(j=1;j<=l;j++){
        fact=fact*j;   }
        printf("%d",fact);


}