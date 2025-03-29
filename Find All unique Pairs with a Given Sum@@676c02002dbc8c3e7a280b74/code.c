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
    for (int i = 0; i < n - 1; i++) 
    { 
       for (int j = i + 1; j < n; j++) 
       { 
            if (a[i] + a[j] == t) 
            {
                printf("%d %d\n", a[i], a[j]);
            }
        }
    }

    return 0;
}
