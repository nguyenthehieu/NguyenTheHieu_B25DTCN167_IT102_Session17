#include <stdio.h>
#include <string.h>

int main () {
	char arr[50];
	char newArr[50];
	printf ("moi ban nhap chuoi Palindrome : ");
	fgets(arr,50,stdin);

	arr[strcspn(arr,"\n")] = '\0' ;

	for( int i = 0 ; i < strlen(arr) ; i ++) {
		newArr[i]= arr[strlen(arr)-i-1];


	}
	if(strcmp(newArr,arr)==0) {
		printf(" chuoi la Palindrome ");
	} else {
		printf(" chuoi khong  la Palindrome ");
	}

	return 0;
}

