#include <stdio.h>
#include <stdlib.h>
int largest(int a[],int n){
    for(int i=0;i<2;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[max]){
                max=j;
            }
        }
        if(max!=0){
            int temp=a[max];
            a[max]=a[i];
            a[i]=temp;
        }
    }
    return a[1];
}

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int res=largest(a,n);
    if(res!=0){
        printf("%d",res);
    }
    else{
        printf("-1");
    }

    

    return 0;
}
