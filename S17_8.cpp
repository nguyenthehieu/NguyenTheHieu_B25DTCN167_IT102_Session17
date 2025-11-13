#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char pw[100];
	printf("Nhap password: ");
	fgets(pw,100,stdin);
	pw[strcspn(pw,"\n")]='\0';
	int isDigit = 0; //chu so
	int isLower = 0; //chu thuong
	int isUpper = 0; //chu hoa
	int isSpecial = 0; // ki tu dac biet
	int len = strlen(pw);
	
	if(len<8){
		printf("Khong hop le.\n");
		return 0;
	}
	for( int i = 0; i<len; i++){
		if( isdigit(pw[i])){
			isDigit = 1;
		} else if( islower(pw[i])){
			isLower = 1;
		} else if( isupper(pw[i])){
			isUpper = 1;
		} else {
			isSpecial = 1;
		}
	}
	if(isDigit&&isLower&&isUpper&&isSpecial){
		printf("Hop le.\n");
	} else {
		printf("Khong hop le.\n");
	}
	
	return 0;
}
