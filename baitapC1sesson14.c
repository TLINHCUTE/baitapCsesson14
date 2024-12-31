#include<stdio.h>
#include<string.h>

    int main() {
        char str[100];
        printf("nhap vao mot chuoi: ");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")]= '\0';
        printf("chuoi ban nhap la: %s\n", str);
        printf("do dai cua chuoi la: %lu\n", strlen(str));
         return 0;
    }