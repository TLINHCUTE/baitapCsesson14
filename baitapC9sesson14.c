#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "an qua nho ke trong cay";  
    char ch;  
    int i, j = 0;
    printf("Nhap vao 1 ky tu can xoa: ");
    scanf("%c", &ch);  
    int len = strlen(str);  
    for (i = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];  
        }
    }
    str[j] = '\0';  
    printf("Chuoi sau khi xoa: %s\n", str);
    return 0;
}
