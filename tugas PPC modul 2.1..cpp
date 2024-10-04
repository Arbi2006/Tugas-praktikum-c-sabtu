#include <stdio.h>

int main() {
    // Deklarasi variabel
    float alas = 8.0; // panjang alas segitiga dalam cm
    float tinggi = 5.0; // tinggi segitiga dalam cm
    float luas; // variabel untuk menyimpan luas segitiga

    // Menghitung luas segitiga
    luas = (alas * tinggi) / 2;

    // Menampilkan hasil
    printf("Luas segitiga dengan alas %.2f cm dan tinggi %.2f cm adalah: %.2f cm²\n", alas, tinggi, luas);

    return 0;
}
