#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max=a[0];
    int freq[1000]={0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[a[i]]>max){
            printf("%d ",a[i]);
            return 0;
        }
    }

    return 0;
}
