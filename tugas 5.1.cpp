#include <stdio.h>

int main() {
    int jamMasuk, jamKeluar, lamaKerja;

    printf("Masukkan jam masuk: ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam keluar: ");
    scanf("%d", &jamKeluar);

    if (jamKeluar >= jamMasuk) {
        lamaKerja = jamKeluar - jamMasuk;
    } else {
        lamaKerja = (jamKeluar + 12) - jamMasuk; // Jika melewati jam 12
    }

    printf("Lama bekerja %d jam\n", lamaKerja);
    return 0;
}
