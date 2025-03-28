#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]%i!=0){
            count ++;
        }
    }
    if(count>2){
        printf("%d",count);
    }
    else{
        printf("%d",0);
    }
    return 0;
}