#include <stdio.h>

int main(){
    int a[100];
    int n;
    scanf("%d",&n);
     int temp=a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",a[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=n-1;i>0;i--){
        a[i+1]=a[i];
    }
    a[0]=temp;
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }






    return 0;
}