#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char input;
    int count = 0;

    // Input karakter dari pengguna
    printf("Masukkan karakter: ");
    scanf(" %c", &input);

    // Periksa apakah karakter ada di dalam array
    for (int i = 0; i < 10; i++) {
        if (A[i] == input) {
            count++;
        }
    }

    // Output hasil pencarian
    if (count > 0) {
        printf("ADA\n");
        printf("%d\n", count);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}

