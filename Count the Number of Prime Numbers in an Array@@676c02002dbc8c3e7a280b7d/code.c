#include <stdio.h>
int isprime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n% i == 0) {
            return 0; 
        }
    }
    return 1;
}
int main(){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(isprime(a[i])){
            count ++;
        }
    }
    if (count == 1) {
        printf("1");  
    } else if (count <= 2) {
        printf("0");  
    } else {
        printf("%d", count); 
    }

    return 0;
}