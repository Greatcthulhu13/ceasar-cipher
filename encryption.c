#include <stdio.h>
#include <ctype.h>      //C character classification

// Function to encrypt a character using the Caesar cipher
char encryptChar(char ch, int shift) {
    if (isalpha(ch)) {
        char base = isupper(ch) ? 'A' : 'a';
        return (ch - base + shift) % 26 + base;
    }
    return ch;
}

// Function to encrypt a string using the Caesar cipher
void encryptString(char *str, int shift) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = encryptChar(str[i], shift);
    }
}

int main() {
    char input[300];
    int shift;

    // Get input string
    printf("Enter a word or a sentence: ");     //asks for an input
    fgets(input, sizeof(input), stdin);

    // Get shift value
    printf("Enter the shift value: ");      //asks for a value to shift the numbers by
    scanf("%d", &shift);

    // this will encrypt the string
    encryptString(input, shift);

    // Display the encrypted string
    printf("Encrypted string: %s\n", input);

    return 0;
}
