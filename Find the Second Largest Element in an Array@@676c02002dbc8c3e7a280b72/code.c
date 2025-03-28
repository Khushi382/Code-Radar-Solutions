#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int largest = abs(a[0]), secondLargest = -1;
    if(n<2){
        printf("%d",-1);
        return 0;
    }
    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = abs(a[i]);
        } 
        else if (abs(a[i]) > secondLargest && abs(a[i]) != largest) {
            secondLargest = abs(a[i]);   
        }
    }
    printf("%d\n",secondLargest);
    

    return 0;
}
