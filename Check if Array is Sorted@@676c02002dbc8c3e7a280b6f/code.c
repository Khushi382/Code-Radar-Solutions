#include <stdio.h>

int check(int a[],int n){
    for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
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

    if(check(a,n)==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }


    return 0;
}