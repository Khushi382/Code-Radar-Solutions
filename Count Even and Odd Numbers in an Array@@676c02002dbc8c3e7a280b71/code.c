#include <stdio.h>

int main(){
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
           even++;
        }
        if(a[i]%2!=0){
            odd++;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}