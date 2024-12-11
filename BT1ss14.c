#include<stdio.h>

int main(){
	char str[100];
	printf("Nhap 1 chuoi ky tu bat ky: ");
	fgets(str, sizeof(str), stdin);
	
	int length=0;
	while(str[length] != '\0' && str[length] != '\n'){
		length++;
}
	printf("\nChuoi vua nhap: %s", str);
	printf("Do dai cua chuoi: %d\n\n", length);
	
}
