#include <stdio.h>

int do_dai_chuoi(char *chuoi) {
    int do_dai = 0;
    while (chuoi[do_dai] != '\0') {
        do_dai++;
    }
    return do_dai;
}

int dao_nguoc_chuoi(char *chuoi) {
    int do_dai = do_dai_chuoi(chuoi);
    for (int i = 0; i < do_dai / 2; i++) {
        char temp = chuoi[i];
        chuoi[i] = chuoi[do_dai - 1 - i];
        chuoi[do_dai - 1 - i] = temp;
    }
    return 0;
}

int main() {
    char chuoi[] = "Xin chao, the gioi!";
    dao_nguoc_chuoi(chuoi);
    printf("Chuoi dao nguoc la: %s\n", chuoi);
    return 0;
}

