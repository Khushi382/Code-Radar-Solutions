#include<stdio.h>
int check(int a[],int n){
    int maxeven=a[0];
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
        if(a[i]>maxeven){
            maxeven=a[i];
        }
        
        }
    }
    return maxeven;
}
int main(){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(not -1){
            printf("%d",check(a,n));
        }
        else{
            printf("%d",-1);
        }
    }
    return 0;
}