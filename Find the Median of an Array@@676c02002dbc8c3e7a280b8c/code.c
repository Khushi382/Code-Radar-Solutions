#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int right=n-1;
    int left=0;
    int res;
    if(n%2!=0){
        res=a[n/2];
        printf("%d",res);
    }
    else{
        res=(a[n/2-1]+a[n/2])/2;
        printf("%d",res);
    }
    return 0;
}