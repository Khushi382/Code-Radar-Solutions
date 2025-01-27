#include <stdio.h>
int main() {
    int a,b,temp;
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d\t",a);
    printf("%d",b);
    return 0;
}