#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if(a^2==b^2){
        printf("Yes");


    }
    else{
        printf("No");
    }
    return 0;
}