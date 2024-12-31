#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Email cua toi la phandinhnghi27062356@gmail.com";
    int count_letters = 0, count_digits = 0, count_specials = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            count_letters++; 
        } else if (isdigit(str[i])) {
            count_digits++; 
        } else {
            count_specials++; 
        }
    }
    printf("So ky tu la chu cai: %d\n", count_letters);
    printf("So ky tu la chu so: %d\n", count_digits);
    printf("So ky tu dac biet: %d\n", count_specials);
    return 0;
}
