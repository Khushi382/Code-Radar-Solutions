#include <stdio.h>
int main() {
    int no;
    int div;
    scanf("%d",&no);
    scanf("%d",&div);
    if(no%div==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}