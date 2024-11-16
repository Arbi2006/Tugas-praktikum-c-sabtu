#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaParkir, biaya;

    printf("Masukkan jam masuk: ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar: ");
    scanf("%d", &jamKeluar);

    if (jamKeluar >= jamMasuk) {
        lamaParkir = jamKeluar - jamMasuk;
    } else {
        lamaParkir = (jamKeluar + 12) - jamMasuk; // Jika melewati jam 12
    }

    if (lamaParkir <= 2) {
        biaya = 2000; // Biaya 2 jam pertama
    } else {
        biaya = 2000 + (lamaParkir - 2) * 500; // Tambahan per jam berikutnya
    }

    printf("Lama parkir %d jam, Biaya = %d\n", lamaParkir, biaya);
    return 0;
}