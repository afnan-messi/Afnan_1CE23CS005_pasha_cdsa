#include <stdio.h>
#include <ctype.h>

void swapCase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        i++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    swapCase(str);

    printf("Swapped case string: %s", str);

    return 0;
}