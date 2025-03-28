#include<stdio.h>
#include<stdlib.h>
int main(){
    a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int right=n-1;
    int left=0;
    while(left<=right){
        int mid=ceil((left+right))/2;
        printf("%d",a[mid]);
    }
    return 0;
}