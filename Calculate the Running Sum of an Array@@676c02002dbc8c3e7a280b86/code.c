#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        int t1=a[i],t2=a[i+1]+t1,nt;
        printf("%d ",t1);
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }



    return 0;
}
