#include <stdio.h>
int main(){
    int a[100];
    int sum=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int max=a[0];
    int smax=-1;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            smax=max;
            max=a[i];
            int pr=smax*max;
        }
        printf("%d",pr);
    }




    return 0;
}