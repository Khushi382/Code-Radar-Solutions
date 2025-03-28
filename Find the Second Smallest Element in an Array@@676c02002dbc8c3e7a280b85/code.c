#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n);  
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int min=a[0];
    int smin=-1;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            smin=min;
            min=a[i];
        }
    }
    printf("%d",smin);

    return 0;
}