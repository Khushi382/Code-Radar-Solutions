#include <stdio.h>
int check(int a[],int n){
    for(int i=0;i<n;i++){
        int max=a[0];
        if(a[i]>a[i+1] && a[i]>a[i-1]){
            max=a[i];
        }
         return max;
    }
}

int main(){
    int a[100];
    int i;
    int max=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(check(a,n)){
        printf("%d",max);
    }
    else{
        printf("%d",-1);
    }



    return 0;
}