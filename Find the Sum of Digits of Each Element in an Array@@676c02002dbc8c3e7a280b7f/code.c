#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[100];
    int sum=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int sum=0;
        while(a[i]!=0){
            int rem=a[i]%10;
            sum+=rem;
            a[i]=a[i]/10;
        }
        printf("%d ",abs(sum));
    }

    
    return 0;
}