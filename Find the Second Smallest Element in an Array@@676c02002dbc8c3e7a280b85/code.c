#include <stdio.h>
#include <stdlib.h>

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
        if(abs(a[i])<min){
            smin=min;
            min=abs(a[i]);
        }
        else if (abs(a[i]) > min && (smin == -1 || abs(a[i]) < smin)) {
            smin = abs(a[i]);
        }
    }
    printf("%d",smin);

    return 0;
}