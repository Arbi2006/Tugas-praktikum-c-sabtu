#include <stdio.h>

int main() {
    int A[11] = {0}; // Array A kosong
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int index = 0;

    // Simpan hanya nilai [12, 7, 5, 17, 9, 35]
    for (int i = 0; data[i] != 999 && index < 11; i++) {
        if (data[i] == 12 || data[i] == 7 || data[i] == 5 || data[i] == 17 || data[i] == 9 || data[i] == 35) {
            A[index++] = data[i];
        }
    }

    // Tampilkan isi array
    printf("a. A: ");
    for (int i = 0; i < index; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}

