#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||'e'||'i'||'o'||'u'){
        printf("Vowel");
    }
    else if(ch>'a' && ch<='z' && ch!='a'||'e'||'i'||'o'||'u'){
        printf("Consonant");
    }
    else if(ch>=1){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}