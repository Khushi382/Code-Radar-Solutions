#include <stdio.h>

int main(){
    int a[100];
    int i;
    int max=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i+1]==a[i+2] || a[i+1]==a[i]){
            printf("%d",-1);
        }
        else{
        if(a[i]>a[i+1] && a[i]>a[i-1]){
            max=a[i];
            break;
        }
    }
    }
    printf("%d",max);


    return 0;
}