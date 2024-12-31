#include<stdio.h>

    int main() {
        char str[] = "Phan Dinh Nghi";
        for (int i = 0; str[i] != '\0'; i++) {
            printf("%c ", str[i]);
        }
        return 0;
    }