#include <stdio.h>

int do_dai_chuoi(char *chuoi) {
    int do_dai = 0;
    while (chuoi[do_dai] != '\0') {
        do_dai++;
    }
    return do_dai;
}

int main() {
    char chuoi[100];

    printf("Nhap vao mot chuoi bat ky: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    int do_dai = do_dai_chuoi(chuoi);

    printf("Chuoi vua nhap la: %s", chuoi);
    printf("Do dai cua chuoi la: %d\n", do_dai - 1); // Tr? 1 ð? không tính k? t? '\n'

    return 0;
}

