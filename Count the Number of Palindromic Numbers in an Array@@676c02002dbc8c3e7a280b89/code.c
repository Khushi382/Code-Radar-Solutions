#include <stdio.h>
int ispal(int num){
    int sum=0;
    int original=num;
    while(n!=0){
        int rem=n%10;
        int sum=sum*10+rem;
        n=n/10;
    }
    return (sum==original);
}

int main() {
    int a[100];
    int n;
    
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
   for(int i=0;i<n;i++){
    if(ispal(num)){
      count++;
    }
   }
   printf("%d",count);

    return 0;
}
