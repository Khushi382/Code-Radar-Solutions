#include <stdio.h>
int main() {
    int a,i;
    scanf("%d",&a);
    if(a==2)
    {
        printf("Prime");
    }

        for(i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                printf("Not Prime");
                
            }
            
        }
        printf("Prime");

    return 0;
}