#include <stdio.h>
int check(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1] && a[i]>a[i-1]){
            max=a[i];
            break;
            return 0;
        }
    }
    return -1;
}

int main(){
    int a[100];
    int i;
    int max=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }



    return 0;
}