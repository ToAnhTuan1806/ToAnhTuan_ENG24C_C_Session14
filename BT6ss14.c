#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    
    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);
	
	int i;
    for (i=0; i<strlen(str); i++) {
        if ((str[i] >='a' && str[i]<='z') || (str[i] >='A' && str[i]<='Z')) {
            count++;
        }
    }

    printf("So ky tu la chu cai trong chuoi la: %d\n", count);

    return 0;
}

