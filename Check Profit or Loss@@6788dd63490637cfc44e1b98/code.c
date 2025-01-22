#include <stdio.h>
int main() {
    int cp,sp;
    scanf("%d %d", &cp, %sp);
    if(sp>cp){
        printf("Profit");
    }
    else if(cp>sp){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    
    return 0;
}