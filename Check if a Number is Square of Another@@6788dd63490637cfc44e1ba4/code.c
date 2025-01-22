#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if(a==b^2){
        printf("Yes");


    }
    else{
        printf("No");
    }
    return 0;
}