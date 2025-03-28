#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100];
    int n;
    
    // Read the number of elements
    scanf("%d", &n);
    
    // Check if there is only one element
    if (n == 1) {
        printf("-1\n");
        return 0;
    }

    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort the array
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap elements
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Find the minimum difference between adjacent elements
    int minDiff = abs(a[1] - a[0]);
    for (int i = 1; i < n - 1; i++) {
        int diff = abs(a[i + 1] - a[i]);
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    // Print the minimum difference
    printf("%d\n", minDiff);

    return 0;
}

