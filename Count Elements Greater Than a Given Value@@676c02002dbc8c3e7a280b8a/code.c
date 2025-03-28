#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d",&k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if(a[i]>k){
            count++;
        }
       
    }
    printf("%d", count);

    return 0;
}