#include<stdio.h>
#include<stdlib.h>
int check(int a[],int n){
    int maxeven=-1;
    for(int i=0;i<n;i++){
        if(abs(a[i])%2==0){
        if(abs(a[i])>maxeven){
            maxeven=abs(a[i]);
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
        int res=check(a,n);
        if(res!=-1){
            printf("%d",res);
        }
        else{
            printf("%d",-1);
        }
    
    return 0;
}