#include <stdio.h>
int main() {
    int n;
    int i;
    int x;
    scanf("%d",&n);
    scanf("%d",&i);
    x=n & (i-1);
    printf("%d",x);
    
    return 0;
}