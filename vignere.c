
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

void encipher();
void decipher();

void main() {
    int choice;
    while (1) {
        printf("\n1. Encrypt Text");
        printf("\t2. Decrypt Text");
        printf("\t3. Exit");
        printf("\n\nEnter Your Choice : ");
        scanf("%d", &choice);
        if (choice == 3)
            exit(0);
        else if (choice == 1)
            encipher();
        else if (choice == 2)
            decipher();
        else
            printf("Please Enter Valid Option.");
    }
}

void encipher() {
    unsigned int i, j;
    char input[50], key[10];
    printf("\n\nEnter Plain Text: ");
    scanf("%s", input);
    printf("\nEnter Key : ");
    scanf("%s", key);
    printf("\nEncrypted Text: ");
    for (i = 0, j = 0; i < strlen(input); i++) {
        printf("%c", input[i] + key[j] - 'a');
        j = (j + 1) % strlen(key);
    }
}

void decipher() {
    unsigned int i, j;
    char input[50], key[10];
    printf("\n\nEnter Cipher Text: ");
    scanf("%s", input);
    printf("\nEnter Key : ");
    scanf("%s", key);
    printf("\nDecrypted Text: ");
    for (i = 0, j = 0; i < strlen(input); i++) {
        printf("%c", input[i] - key[j] + 'a');
        j = (j + 1) % strlen(key);
    }
}
