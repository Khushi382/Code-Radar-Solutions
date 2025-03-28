#include <stdio.h>

int main(){
    int a[100];
    int max=0;
    int min=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d %d",max,min);
    return 0;
}