#include <stdio.h>

void setNthBit(int *n, int bitPosition) {
    // Create a mask by shifting 1 to the left by 'bitPosition'
    *n |= (1 << bitPosition);  // Set the nth bit to 1
}

int main() {
    int number, bitPosition;
    scanf("%d", &number);
    scanf("%d", &bitPosition);

    setNthBit(&number, bitPosition);
    printf("%d",number);

    return 0;
}
