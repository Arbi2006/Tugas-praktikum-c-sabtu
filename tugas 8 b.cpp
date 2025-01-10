#include <stdio.h>

int main() {
    int A[11] = {0};
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int index = 0;

    // Simpan data lebih besar dari 9 sesuai urutan
    for (int i = 0; data[i] != 999 && index < 11; i++) {
        if (data[i] > 9) {
            A[index++] = data[i];
        }
    }

    // Tampilkan isi array
    printf("b. A: ");
    for (int i = 0; i < index; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}

