#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||'e'||'i'||'o'||'u'){
        printf("Vowel");
    }
    else if(ch>='a' && ch<='z'){
        printf("Consonant");
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}