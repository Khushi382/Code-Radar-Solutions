#include <stdio.h>

int countTrailingZeros(unsigned int n) {
    int count = 0;

    // Keep shifting the number right until the least significant bit is 1
    while (n > 0 && (n & 1) == 0) {
        count++;
        n >>= 1;  // Right shift the number by 1 bit
    }
    
    return count;
}

int main() {
    unsigned int number;
    scanf("%u", &number);
    
    int trailingZeros = countTrailingZeros(number);
    printf("%d", trailingZeros);
    
    return 0;
}
