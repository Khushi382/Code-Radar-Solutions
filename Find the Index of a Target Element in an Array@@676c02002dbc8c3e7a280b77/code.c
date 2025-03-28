#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n); 
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<n;i++){
        if(a[i]==t){
            printf("%d",i);
            break;
        }
        else{
            printf("%d",-1);
            break;
        }
    }


    return 0;
}