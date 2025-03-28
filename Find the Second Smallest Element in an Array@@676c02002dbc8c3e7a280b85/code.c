#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n);

    // Reading array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n == 1) {
        printf("-1\n"); // If there's only one element, output -1
        return 0;
    }

    int min = abs(a[0]);
    int smin = abs(a[0]);

    // Find the smallest and second smallest absolute values
    for (int i = 1; i < n; i++) {
        int abs_val = abs(a[i]);
        if (abs_val < min) {
            smin = min; // The current smallest becomes the second smallest
            min = abs_val; // Update the smallest
        } else if (abs_val > min && abs_val < smin) {
            smin = abs_val; // Update the second smallest
        }
    }

    // If second minimum is still the same as the first minimum, it means no distinct second minimum exists.
    if (smin == min) {
        printf("-1\n");
    } else {
        printf("%d\n", smin);
    }

    return 0;
}
