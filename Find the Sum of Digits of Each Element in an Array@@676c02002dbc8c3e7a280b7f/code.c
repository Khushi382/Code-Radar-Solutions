#include <stdio.h>
int main(){
    int a[100];
    int sum=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
        printf("%d",sum);
    
    return 0;
}