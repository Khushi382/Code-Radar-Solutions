#include<stdio.h>
int main(){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int maxeven=a[0];
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
        if(a[i]>maxeven){
            maxeven=a[i];
        }
        }
    }
    printf("%d",maxeven);
    return 0;
}