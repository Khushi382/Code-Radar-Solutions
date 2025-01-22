#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(100>a>0){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}