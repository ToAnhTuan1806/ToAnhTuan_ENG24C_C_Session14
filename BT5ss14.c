# include <stdio.h>
# include <string.h>
int main(){
	char str[]="To Anh Tuan";
    int cout;
	int i;
	for(i=0; i<strlen(str); i++){
		if(str[i] == ' '){
			cout++;
		}
	}
	printf("So phan tu trong chuoi la: %d",cout+1);
}

