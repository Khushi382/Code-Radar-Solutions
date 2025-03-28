#include <stdio.h>

int main() {
    int a[100];
    int n;
    
    // Input number of elements
    scanf("%d", &n);
    
    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int freq[1000] = {0};  // To store the frequency of each element
    int maxFreq = 0;       // Variable to store the maximum frequency
    int result = a[0];     // Variable to store the element with maximum frequency (initialized to the first element)
    
    // Calculate the frequency of each element
    for(int i = 0; i < n; i++) {
        freq[a[i]]++;
    }
    
    // Find the element with the maximum frequency
    for(int i = 0; i < n; i++) {
        if(freq[a[i]] > maxFreq) {
            maxFreq = freq[a[i]];  // Update max frequency
            result = a[i];          // Update result with the current element
        }
        // If frequencies are the same, take the smaller element
        else if(freq[a[i]] == maxFreq && a[i] < result) {
            result = a[i];          // Update result with the smaller element
        }
    }
    
    // Output the element with the highest frequency
    printf("%d", result);

    return 0;
}
