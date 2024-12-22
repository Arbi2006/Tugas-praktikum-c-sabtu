#include <stdio.h>

int main() {
    int A[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; // Data yang diberikan
    int B[11]; // Array untuk menyimpan nilai genap
    int i, j = 0;

    printf("Data awal:\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }
    printf("\n\n");

    // Memfilter nilai genap dari array A
    for (i = 0; i < 11; i++) {
        if (A[i] % 2 == 0) {
            B[j] = A[i];
            j++;
        }
    }

    // Menampilkan nilai genap yang disimpan di array B
    printf("Nilai genap yang disimpan:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}

