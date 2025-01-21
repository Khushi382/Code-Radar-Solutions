#include <stdio.h>
int main() {
    int a,b,c;
    int result;
    scanf("%d %d %d",&a ,&b ,&c);
    result=a+b+c/3;
    printf("Average: %.2f",result);
    return 0;
}