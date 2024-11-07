#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isSubsequence(char *s, char *t) {
    int i = 0; 
    int j = 0; 

    // Traverse through t
    while (t[j] != '\0') {
        if (s[i] == t[j]) {
            i++;  
        }
        j++;  
    }

    
    return (s[i] == '\0');
}

int main() {
    char s[] = "abc";
    char t[] = "ahbgdc";

    if (isSubsequence(s, t)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
