#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int x=n & -n;
    printf("%d",x);
    return 0;
}