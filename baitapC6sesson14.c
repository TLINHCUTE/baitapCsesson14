#include<stdio.h>
#include<ctype.h>

    int main() {
        char str[] = "Toi ten la Nghi sinh nam 2006";
        int letter_count = 0, digit_count = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if(isalpha(str[i])) {
                letter_count++;
            }
            else if(isdigit(str[i])) {
                digit_count++;
            }
        }
        printf("so ky tu chu cai trong chuoi la: %d\n", letter_count);
        printf("so ky tu so trong chuoi la: %d\n", digit_count);
        return 0;
        
    }