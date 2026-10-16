#include <stdio.h>

int main() {
    char nama[100], nim[20], kelas[10];
    char ttl[100], alamat[100], hobby[100], no_hp[20];

    printf("=== Input Biodata ===\n");

    printf("Nama : ");
    scanf(" %99[^\n]", nama);

    printf("NIM : ");
    scanf(" %19[^\n]", nim);

    printf("Kelas Paralel : ");
    scanf(" %9[^\n]", kelas);

    printf("Tempat/Tanggal Lahir : ");
    scanf(" %99[^\n]", ttl);

    printf("Alamat : ");
    scanf(" %99[^\n]", alamat);

    printf("Hobby : ");
    scanf(" %99[^\n]", hobby);

    printf("No. HP : ");
    scanf(" %19[^\n]", no_hp);

    printf("\n=== Output Biodata ===\n");
    printf("Nama : %s\n", nama);
    printf("NIM : %s\n", nim);
    printf("Kelas Paralel : %s\n", kelas);
    printf("Tempat/Tanggal Lahir : %s\n", ttl);
    printf("Alamat : %s\n", alamat);
    printf("Hobby : %s\n", hobby);
    printf("No. HP : %s\n", no_hp);

    return 0;
}
