#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "phan dinh nghi";  
    for (int i = 0; str[i] != '\0'; i++) {
        if (i == 0 || str[i-1] == ' ') {
            str[i] = toupper(str[i]); 
        }
    }
    printf("%s\n", str);
    return 0;
}
