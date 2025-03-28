#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max_from_right = a[n - 1]; 
    printf("%d ", max_from_right);
    for(int i = n - 2; i >= 0; i--) {
        if(a[i] >= max_from_right) {
            printf("%d ", a[i]);  // Print the leader
            max_from_right = a[i];  // Update the maximum element seen so far
        }
    }

    return 0;
}
