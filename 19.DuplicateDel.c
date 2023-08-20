//deleting duplicate elements
#include<stdio.h>
int main() {
    int i,n,a[100],freq[10000];
    int newsize =0; 
    printf("enter the limit :");
    scanf("%d",&n);
    printf("enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        freq[a[i]]++;
        }
        
    for(i=0;i<n;i++){
        if (freq[a[i]]==1)
        {
            a[newsize]=a[i]; //a[newsize] is  used to overwrite original array 
            newsize++;
        }
    }
    printf("the array after deleting duplicate elements :\n");
    for (i=0;i<newsize;i++){
        printf("%d\n",a[i]);

    }
}