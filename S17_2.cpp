#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	int choice;
	while(1){
		printf("\n+-------------------MENU-------------------+\n");
		printf("| 1. Toan bo ky tu chuyen thanh chu hoa    |\n");
		printf("| 2. Toan bo ky tu chuyen thanh chu thuong |\n");
		printf("+------------------------------------------+\n");
		
		printf("Nhap mot chuoi: ");
		fgets(str,100,stdin);
	
		printf("\nNhap lua chon: ");
		scanf("%d",&choice);
		
		switch(choice){
			case 1: {
			    for (int i = 0; i < strlen(str); i++) {
                            str[i] = str[i] - 32;  
                        
                }        
                    
                 printf("Chuoi sau khi IN HOA: %s", str);
			    break;}
			case 2:{
				for (int i = 0; i < strlen(str); i++) {
                            str[i] = str[i] + 32;  
                        
                }    
                 printf("Chuoi sau khi IN HOA: %s", str);
			    break;    
		}
	}
	}
	return 0;
}

