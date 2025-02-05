#include <stdio.h>
int main() {
    float a,b;
    char op;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf(" %c",&op);
    switch(op){
        case '+':
        printf("%.0f\n",a+b);
        break;
        case '-':
        printf("%.0f\n",a-b);
        break;
        case '*':
        printf("%.0f\n",a*b);
        break;
        case '/':
        if(b!=0){
        printf("%.0f\n",a/b);}
        else{
            printf("error");
        }
        break;
        default:
        printf("error");
        break;    
}
    return 0;
}