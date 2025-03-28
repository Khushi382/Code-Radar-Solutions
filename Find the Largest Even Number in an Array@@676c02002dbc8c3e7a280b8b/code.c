#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int maxeven=a[0];
    for(int i=0;i<n;i++){
        if(a[i]%2>max){
            max=a[i];
        }
    }
    printf("%d",max);
    return 0;
}