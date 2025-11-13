#include <stdio.h>
#include <string.h>
void deletee(char str[] , char ch) {
	int len = strlen(str);
    int i, j = 0;
    char result[100];

	for (i = 0; i < len; i++) {
        if (str[i] != ch) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("Chuoi sau khi xoa '%c' la: %s\n", ch, result);
}
	
int main () {
	char str[100];
	char erase;
	printf("Moi ban nhap chuoi: ");
	fgets(str,100,stdin);
	str[strcspn(str, "\n")] = '\0';
	
	printf("moi ban nhap vao mot ki tu de xoa : \n");
	scanf("%c",&erase);
	deletee(str, erase);


	
	return 0;
}
