#include <stdio.h>

int main(){
    int a[100];
    int max=a[0];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            printf("%d",max);
        }
    }


    return 0;
}