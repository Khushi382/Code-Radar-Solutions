#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'R':
        printf("Stop");
        break;
        case 'G':
        printf("Go");
        break;
        case 'Y':
        printf("Slow Down");
        break;
        default:
        printf("Invalid input");
        break;

    }
    return 0;
}