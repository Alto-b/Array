
#include<stdio.h>
int main(){
    int i,n,s=1000,a[100],new=0;
    printf("enter size of array \n");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]<s){
            s=a[i];
        }
    }
     for(i=0;i<n;i++){
        if(a[i]!=s){
            a[new]=a[i];
            new++;
            
        }
    }
for(i=0;i<new;i++){
    printf("%d",a[i]);
}


}