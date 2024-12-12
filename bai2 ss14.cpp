#include <stdio.h>

int main() {
    char chuoi[] = "Xin chao, minh la sinh vien PTIT!";
    int i = 0;

    while (chuoi[i] != '\0') {
        printf("%c ", chuoi[i]);
        i++;
    }
    printf("\n");

    return 0;
}

