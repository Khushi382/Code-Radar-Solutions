#include <stdio.h>

int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--){
        int rev=a[i];
        if(rev==a[100]){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}