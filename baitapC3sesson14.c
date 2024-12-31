#include<stdio.h>
#include<string.h>

    int main() {
        char str[] = "ihgN hniD nahP";
        int length = strlen(str);
        printf("chuoi dao nguoc la: ");
        for (int i = length - 1; i >= 0; i--) {
            printf("%c ", str[i]);
        }
        return 0;
    }