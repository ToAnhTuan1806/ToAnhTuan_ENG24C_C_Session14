#include<stdio.h>
#include<string.h>

int main(){
	char str[]= "To Anh Tuan";
	int length = strlen(str);
	
	int i;
	for(i=0; i<length/2; i++){
		char temp=str[i];
		str[i]=str[length-i-1];
		str[length-i-1]=temp;
	}
	printf("Chuoi dao nguoc: %s\n", str);
	return 0;
}

