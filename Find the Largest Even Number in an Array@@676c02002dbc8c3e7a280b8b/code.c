#include<stdio.h>
#include<stdlib.h>

int check(int a[], int n) {
    int maxeven = -1;  // Initialize maxeven as -1 to indicate no even number found yet
    
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {  // Check if the number is even
            if (a[i] > maxeven) {  // If it's greater than the current maxeven, update maxeven
                maxeven = a[i];
            }
        }
    }

    return maxeven;  // Return the largest even number, or -1 if no even number was found
}

int main() {
    int a[100];
    int n;
    
    scanf("%d", &n);  // Read the size of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);  // Read the array elements
    }
    
    int res = check(a, n);  // Call check() to find the largest even number
    
    if (res != -1) {
        printf("%d", res);  // If an even number was found, print the largest one
    } else {
        printf("-1");  // If no even number was found, print -1
    }

    return 0;
}
