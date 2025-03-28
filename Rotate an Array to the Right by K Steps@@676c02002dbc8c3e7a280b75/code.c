#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int k;
    scanf("%d",&k);
    int temp=a[n-1];
    for(int i=n-2;i>0;i--){
        a[i+1]=a[i];
    }
    a[0]=temp;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }




    return 0;
}