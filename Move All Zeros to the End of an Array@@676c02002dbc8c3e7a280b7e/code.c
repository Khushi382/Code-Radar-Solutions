#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(inti=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int nonZeroIndex = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            a[nonZeroIndex] = a[i];
            if (i != nonZeroIndex) {
                a[i] = 0; 
            }
            nonZeroIndex++;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }



    return 0;
}