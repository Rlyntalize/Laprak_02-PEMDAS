#include <stdio.h>
#include <math.h>

int main() {
    int a, b, alas, tinggi, sisi_miring;
    int keliling, luas;

    scanf("%d %d", &a, &b);

    if (a < b) {
        tinggi = a;
        sisi_miring = b;
    } else {
        tinggi = b;
        sisi_miring = a;
    }

    alas = sqrt(sisi_miring * sisi_miring - tinggi * tinggi);
    keliling = alas + tinggi + sisi_miring;
    luas = alas * tinggi / 2;

    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n", luas);

    return 0;
}