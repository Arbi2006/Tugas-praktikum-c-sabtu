#include <stdio.h>
#include <math.h>  // Perlu untuk menggunakan fungsi sqrt()

int main() {
    float alas, tinggi, sisi_miring;

    // Input alas dan tinggi
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    
    printf("Masukkan panjang tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Sisi miring segitiga adalah: %.2f cm\n", sisi_miring);

    return 0;
}
