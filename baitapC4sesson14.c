#include<stdio.h>

    int main() {
        char str[] = "Toi la sinh vien cua PTIT";
        char ch;
        int count = 0;
        printf("nhap vao mot ky tu: ");
        scanf("%c", &ch);
        for (int i = 0; str[i] != '\0'; i++) {
            if(str[i] == ch) {
                count++;
            }
        }
        printf("ky tu '%c' xuat hien %d lan trong chuoi \"%s\".\n", ch,  count, str);
        return 0;
    }