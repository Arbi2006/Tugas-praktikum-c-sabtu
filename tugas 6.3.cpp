#include <stdio.h>

int main() {
    int num = 1; // Inisialisasi angka pertama
    
    // Loop untuk mencetak angka hingga 1024
    while (num <= 1024) {
        printf("%d ", num); // Cetak angka dengan spasi
        num *= 2; // Kalikan angka dengan 2 di setiap iterasi
    }
    printf("\n"); // Tambahkan baris baru setelah selesai mencetak
    return 0;
}

