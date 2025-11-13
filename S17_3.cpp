#include<stdio.h>
#include<string.h>

int main(){
	char str1[100], str2[100];
	printf("Nhap chuoi thu 1: ");
	fgets(str1,100,stdin);
	printf("Nhap chuoi thu 2: ");
	fgets(str2,100,stdin);
	

	strcat(str1,str2);
	
	printf("Chuoi moi la: %s", str1);
return 0;
}
