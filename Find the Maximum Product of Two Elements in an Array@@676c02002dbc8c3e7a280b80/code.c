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
    int max=a[0];
    int smax=-1;
    for(int i=0;i<n;i++){
        if(abs(a[i])>max){
            smax=max;
            max=abs(a[i]);
            int pr=smax*max;
        }
         else if (abs(a[i]) > smax && abs(a[i]) != max) {
            smax = abs(a[i]);
        }   
    }
    int pr = smax * max;
        printf("%d", pr); 




    return 0;
}