#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int sum=0;
    for (int i = 0; i < n; i++) {
        sum += a[i];  // Add the current element to sum
        printf("%d ", sum);  // Print the cumulative sum
    }



    return 0;
}
