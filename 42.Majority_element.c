//display the majority element
#include <stdio.h>

int main() {
    int n, i,a[100],freq[100]={0},found=0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }
    for(i=0;i<n;i++){
        if(freq[a[i]]>=n/2){
            printf("element=%d",a[i]);
            found=1;
            freq[a[i]]=0;
        }
        // else if(freq[a[i]]<n/2)
        // printf("no");
        
        
    }
    if(found==0){
        printf("no");
    }
    }
    
   

