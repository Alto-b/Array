
#include <stdio.h>

int main()
{
    int a[100],i,j,c,m,n,k;
    printf("enter the size");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
    for(i=1;i<n;i++){
        c=0;
        for(j=i+1;j<=a[i];j++){
            if(a[i]%j==0){
                c++;
            }
        }
        if(c==2)
        continue;
        else
        {
            if(i==n-1)
                n=n;
            else if(i==n-2)
                n=n-1;
            else{
                for(k=1;k<n;k++){
                    a[k+1]=a[k+3];
                    a[k+2]=a[k+4];
                }
                }
                n=n-2;
        }
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }

}
    
