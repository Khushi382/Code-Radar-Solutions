#include <stdio.h>
int isMonotonic(int a[],int n){
    for(int i=0;i<n;i++){
        int increasing=0,decreasing=0;
        if(a[i]<a[i+1]){
            increasing=1
        }
        if(a[i]>a[i+1]){
            decreasing=1;
        }
    }
}
int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (isMonotonic(a, n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}