#include <stdio.h>

int main() {
    int kecepatan = 2;    // Kecepatan dalam meter per detik
    int waktu = 100;      // Waktu dalam detik
    int jarak;            // Variabel untuk menyimpan jarak yang ditempuh

    // Hitung jarak yang ditempuh
    jarak = kecepatan * waktu;

    // Cetak hasil
    printf("Jarak yang ditempuh setelah %d detik adalah %d meter.\n", waktu, jarak);

    return 0;
}

