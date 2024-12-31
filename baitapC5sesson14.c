#include<stdio.h>
#include<string.h>
#include<ctype.h>

    int main() {
        char str[] = "Toi ten la Phan Dinh Nghi la sinh vien truong ptit";
        int word_count = 0;
        int i = 0;
        printf("chuoi da khai bao: \"%s\"\n", str);
        while (str[i] != '\0') {
            while(str[i] == ' ' && str[i] != '\0') {
                i++;
            }
            if(str[i] != ' ' && str[i] != '\0') {
                word_count++;
                while(str[i] != ' ' && str[i] != '\0') {
                    i++;
                }
            }
        }
        printf("so tu trong chuoi la: %d\n", word_count);
        return 0;
    }