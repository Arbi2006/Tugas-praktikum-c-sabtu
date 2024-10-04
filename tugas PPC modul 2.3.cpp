#include <stdio.h>
#include <math.h> // untuk fungsi sqrt()

int main() {
    float alas = 4.0;   // Panjang sisi alas dalam cm
    float tinggi = 5.0; // Panjang sisi tinggi dalam cm
    float sisi_miring;

    // Menghitung sisi miring menggunakan rumus Pythagoras
    sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Sisi miring segitiga dengan alas %.2f cm dan tinggi %.2f cm adalah %.2f cm\n", alas, tinggi, sisi_miring);

    return 0;
}
