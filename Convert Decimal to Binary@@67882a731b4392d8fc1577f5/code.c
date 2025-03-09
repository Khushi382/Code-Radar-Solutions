#include <stdio.h>

void decimalToBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int number;
    scanf("%d", &number);
    decimalToBinary(number);
    
    return 0;
}
