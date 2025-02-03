#include <stdio.h>
int main() {
    int a,b;
    char op;
    scanf("%d %d",&a,&b,);
    scanf(" %c",&op);
    switch(op){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        //default:
        //printf("error");
        //break;    
}
    return 0;
}