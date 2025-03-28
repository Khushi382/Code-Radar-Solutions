#include <stdio.h>

int check(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]<a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;           
            }
        }
    }
    return 1;
}

int main(){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }

    if(check==1){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }


    return 0;
}