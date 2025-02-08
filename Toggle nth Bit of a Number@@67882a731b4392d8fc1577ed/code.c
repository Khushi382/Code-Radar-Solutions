#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    scanf("%d",&i);
    int mask=n^(1<<i);
    printf("%d",mask);
    return 0;
}