#include <stdio.h>
int main() {
    int a;
    int count=0;
    scanf("%d",&a);
    if(a>0){
    for(i=1;i<=a;i++){
            if(a%i==0)
            count++;
        }
        if(count>2){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }}
    
    



    return 0;
}