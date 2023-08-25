//merge 2 arrays

#include<stdio.h>
int main(){
    int i,j,a[100],b[100],c[100],m,n,mn;
    printf("enter size of 1st array \n");
    scanf("%d",&n);
    printf("enter elements of 1st array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("enter size of 2nd array \n");
    scanf("%d",&m);
    printf("enter elements of 2nd array");
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

    mn=m+n;
    
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(j=0;j<m;j++){
        c[i]=b[j];
        i++;
    }
    printf("merged array is \n");
    for(i=0;i<mn;i++){
        printf("%d",c[i]);
    }

}