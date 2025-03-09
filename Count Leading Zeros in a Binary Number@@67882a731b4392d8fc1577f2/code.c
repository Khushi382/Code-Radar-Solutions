#include <stdio.h>

int countLeadingZeros(unsigned int n) {
    int count = 0;
    // Iterate through each bit from the left
    for (int i = 31; i >= 0; i--) {
        // Check if the current bit is 1
        if ((n >> i) & 1) {
            break;
        }
        count++;
    }
    return count;
}

int main() {
    unsigned int number;
    scanf("%u", &number);
    
    int leadingZeros = countLeadingZeros(number);
    printf("%d", leadingZeros);
    
    return 0;
}
