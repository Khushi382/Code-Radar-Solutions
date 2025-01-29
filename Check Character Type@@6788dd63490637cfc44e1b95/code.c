#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||'e'||'i'||'o'||'u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Vowel");
    }
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
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