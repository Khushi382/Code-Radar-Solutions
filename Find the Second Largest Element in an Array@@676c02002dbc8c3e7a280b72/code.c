#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int largest = a[0], secondLargest = -1;
    if(n<2){
        printf("%d",-1);
        return 0;
    }
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } 
        else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];   
        }
    }
    printf("%d\n",secondLargest);
    

    return 0;
}
