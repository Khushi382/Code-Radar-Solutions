#include <stdio.h>

void fibonacciSeries(int n) {
    static int t1 = 0, t2 = 1;
    int nt;

    if (n > 0) {
        // Calculate the next term in the series
        nt = t1 + t2;
        
        // Update t1 and t2 for the next iteration
        t1 = t2;
        t2 = nt;

        // Print the current term
        printf(" %d", nt);

        // Recursive call to print the rest of the series
        fibonacciSeries(n - 1);
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    // Special case for n = 0
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    } else {
        printf("0 1");  // Explicitly print the first term 0
        fibonacciSeries(n - 1);  // We already printed the first term (0), so print n-1 terms
    }

    return 0;
}
