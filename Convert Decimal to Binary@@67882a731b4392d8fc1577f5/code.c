#include <stdio.h>

void decimalToBinary(int n) {
    int flag = 0;  // To skip leading zeros

    // Special case when the number is 0
    if (n == 0) {
        printf("0");
        return;
    }

    // Iterate over each bit of the number
    for (int i = 31; i >= 0; i--) {
        // Use bitwise AND to check if the ith bit is 1 or 0
        int bit = (n >> i) & 1;

        // Only print the bit if it's 1 or if we've already encountered a 1
        if (bit == 1 || flag) {
            printf("%d", bit);
            flag = 1;
        }
    }

    printf("\n");
}

int main() {
    int number;
    scanf("%d", &number);
    
    decimalToBinary(number);
    
    return 0;
}

