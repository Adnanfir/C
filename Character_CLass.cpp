#include <iostream>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Lowercase vowel\n"); break;
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Uppercase vowel\n"); break;
        default:
            if (ch >= '0' && ch <= '9')
                printf("Digit\n");
            else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                printf("Consonant\n");
            else
                printf("Special character\n");
    }
    return 0;
}
