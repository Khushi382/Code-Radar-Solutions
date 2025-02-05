#include <stdio.h>
int main() {
    float a,b;
    char op;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf(" %c",&op);
    switch(op){
        case '+':
        printf("%f\n",a+b);
        break;
        case '-':
        printf("%f\n",a-b);
        break;
        case '*':
        printf("%f\n",a*b);
        break;
        case '/':
        printf("%f\n",a/b);
        break;
        default:
        printf("error");
        break;    
}
    return 0;
}