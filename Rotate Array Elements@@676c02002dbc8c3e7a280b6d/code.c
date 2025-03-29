#include <stdio.h>

int main(){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d\n",&a[i]);
    }
    int k;
    scanf("%d",&k);
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++)
    {
        temp[i]=a[n-k+i];
    }
    for(int i=n-1;i>=k;i--)
    {
        a[i]=a[i-k];
    }
    for(int i=0;i<k;i++)
    {
        a[i]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }





    return 0;
}