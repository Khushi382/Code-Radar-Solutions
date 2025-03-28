#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int freq[1000]={0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }

    for(int i=0;i<n;i++){
        if(freq[a[i]]>n/2){
            printf("%d",a[i]);
            break;
        }
        else{
            printf("%d",-1);
            break;
        }
        
    }





    return 0;
}