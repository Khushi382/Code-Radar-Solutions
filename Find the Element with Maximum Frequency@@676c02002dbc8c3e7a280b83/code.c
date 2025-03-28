#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int maxfreqelement=a[0];
    int maxfreq=0;
    int freq[1000]={0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(freq[a[i]]>maxfrq){
            maxfreqelement=a[i];
            maxfreq=freq[a[i]];
        }
    }
    printf("%d",maxfreqelement);
    return 0;
}
