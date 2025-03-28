#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int largest = a[0], secondLargest = -1;
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } 
    }
    if (secondLargest == -1) {
        printf("No second largest element.\n");
    } else {
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}
