#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100];
    int n;

    // Read the number of elements
    scanf("%d", &n);

    // If there is only one element, return -1
    if (n == 1) {
        printf("-1\n");
        return 0;
    }

    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort the array in ascending order
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

    // Now find the pair with the smallest difference
    int minDiff = abs(a[1] - a[0]);
    int firstElement = a[0];
    int secondElement = a[1];

    for (int i = 1; i < n - 1; i++) {
        int diff = abs(a[i + 1] - a[i]);
        if (diff < minDiff) {
            minDiff = diff;
            firstElement = a[i];
            secondElement = a[i + 1];
        }
    }

    // Print the pair with the smallest difference
    printf("%d %d\n", firstElement, secondElement);

    return 0;
}


