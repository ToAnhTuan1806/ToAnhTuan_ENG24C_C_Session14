#include<stdio.h>
#include<string.h>

int main(){
	char str[]= "To Anh Tuan";
	char pos;
	int count=0;
	
	printf("Chuoi %s\n", str);
	printf("Nhap vao 1 ky tu bat ky: ");
	scanf(" %c", &pos);
	
	int i;
	for(i=0; i<strlen(str); i++){
		if(str[i]==pos){
			count++;
		}
	}
	printf("So lan ky tu '%c' xuat hien trong chuoi la: %d\n", pos, count);
}
