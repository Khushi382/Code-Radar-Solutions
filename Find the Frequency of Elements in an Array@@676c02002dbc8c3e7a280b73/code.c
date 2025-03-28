#include <stdio.h>

int main(){
    int a[100];
    int i;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int freq[1000]={0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    //for(int i=0;i<n;i++){
    if(freq[a[i]]>0){
        printf("%d %d\n",a[i],freq[a[i]]);
    }
    //}
    
    return 0;
}