#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int freq[a[i]]=0;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    for(int i=0;i<n;i++){
    if(freq[a[i]]>0){
        printf("%d %d",a[i],freq[a[i]]);
    }
    }
    
    return 0;
}