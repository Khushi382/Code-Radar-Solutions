#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        printf("First");
    }
    else if(b>a){
        printf("Second");
    }
    else{
        printf("Equal");
    }
    return 0;
}