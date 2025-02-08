#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i;
    scanf("%d",&i);
    int value=(n>>i)&1;
    printf("%d",value);
    
    return 0;
}