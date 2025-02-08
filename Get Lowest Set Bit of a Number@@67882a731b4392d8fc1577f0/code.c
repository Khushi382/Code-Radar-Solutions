#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int x= n & -n;
    int position=0;
    while(x!=1){
        x>>=1;
        position++;
    }
    printf("%d",position);
    return 0;
}