#include <stdio.h>
int ispal(int num){
    int sum=0;
    int original=num;
    while(num!=0){
        int rem=num%10;
        int sum=sum*10+rem;
        num=num/10;
    }
    return (sum==original);
}

int main() {
    int num;
    int a[100];
    int n;
    
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int count=0;
   for(int i=0;i<n;i++){
    if(ispal(num)){
      count++;
    }
   }
   printf("%d",count);

    return 0;
}
