#include <stdio.h>

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int t;
    scanf("%d", &t);
    for (int i = 0; i < n - 1; i++) { 
        if (a[i] + a[i + 1] == t) {
            printf("%d %d\n", a[i], a[i + 1]);
        }
    }

    return 0;
}
