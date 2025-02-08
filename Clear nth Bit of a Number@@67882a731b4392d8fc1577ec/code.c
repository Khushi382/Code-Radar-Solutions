#include <stdio.h>
int main() {
    int n;
    int i;
    scanf("%d",&n);
    scanf("%d",&i);
    int x=~(1<<i);
    n= n&x;
    printf("%d",n);
    
    return 0;
}