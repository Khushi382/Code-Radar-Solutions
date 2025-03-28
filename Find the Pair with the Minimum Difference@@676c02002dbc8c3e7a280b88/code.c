#include <stdio.h>
#include <stdlib.h>

// Function to compare two elements (used in sorting)
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int a[100];
    int n;
    
    // Input number of elements
    scanf("%d", &n);
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Sort the array in ascending order
    qsort(a, n, sizeof(int), compare);
    
    // Print -1 for each element in the sorted array
    for (int i = 0; i < n; i++) {
        printf("-1 ");
    }
    
    return 0;
}
