#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a==2)
    {
        printf("Prime");
    }

    for(int i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            printf("Not Prime");
            return 0;
                
        }
            
    }
     printf("Prime");

    return 0;
}