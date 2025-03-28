#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max_from_right = a[n - 1]; 
    int leaders[100];
    int leader_count = 0;
    leaders[leader_count++] = max_from_right;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] >= max_from_right) {
            leaders[leader_count++] = a[i];  // Store the leader
            max_from_right = a[i];  // Update the maximum element seen so far
        }
    }
    for (int i = leader_count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}

