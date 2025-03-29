#include <stdio.h>
int check(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
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