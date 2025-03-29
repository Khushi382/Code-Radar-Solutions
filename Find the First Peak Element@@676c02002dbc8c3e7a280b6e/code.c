#include <stdio.h>
int check(int a[],int n){
    if (a[0] > a[1]) {
        return a[0];
    }
    if (a[n - 1] > a[n - 2]) {
        return a[n - 1];
    }
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1] && a[i]>a[i-1]){
            return a[i];
        }
    }
    return -1;
}

int main(){
    int a[100];
    int i;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   int res=check(a,n);
   printf("%d ",res);


    return 0;
}