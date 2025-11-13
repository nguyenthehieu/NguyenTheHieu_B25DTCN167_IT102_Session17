#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50];
    char longest[50];
    int maxLength = 0;

    printf("Nhap chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    int i = 0, j = 0;
    while (1) {
        if (str[i] == ' ' || str[i] == '\0') { // duyet het chuoi hoac het tu
            word[j] = '\0'; // ket thuc tu

            if (strlen(word) > maxLength) {
                maxLength = strlen(word);
                strcpy(longest, word);
            }

            j = 0; //reset cho tu moi
            if (str[i] == '\0') break; 
        } else {
            word[j++] = str[i];
        }
        i++;
    }
    printf("Tu dai nhat la: \"%s\"\n", longest);
    printf("Do dai cua tu la: %d\n", maxLength);

    return 0;
}

