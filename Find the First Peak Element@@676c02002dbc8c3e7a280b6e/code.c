#include <stdio.h>
int check(int a[],int n){
    for(int i=0;i<n;i++){
        int max=a[0];
        if(a[i]<a[i+1] && a[i+1]>a[i+2]){
            max=a[i];
        }
         return max;
    }
}

int main(){
    int a[100];
    int i;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   int res=check(a,n);
   printf("%d ",res);


    return 0;
}