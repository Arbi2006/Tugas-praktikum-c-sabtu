#include <stdio.h>

int main() {
    double saldo = 1000000; // Saldo awal dalam rupiah
    double bunga = 0.02;    // Bunga per bulan dalam desimal
    int bulan = 10;         // Jumlah bulan

    // Loop untuk menghitung bunga ber-bunga
    for (int i = 1; i <= bulan; i++) {
        saldo += saldo * bunga; // Tambahkan bunga ke saldo
        printf("Saldo setelah bulan ke-%d: Rp. %.2f\n", i, saldo); // Cetak saldo per bulan
    }

    printf("\nJumlah uang setelah %d bulan adalah Rp. %.2f\n", bulan, saldo);

    return 0;
}

