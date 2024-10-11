#include <stdio.h>

int main() {
    int celcius;
    float fahrenheit, reamur;

    // Input suhu dalam satuan Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%d", &celcius);

    // Menghitung Fahrenheit dan Reamur
    fahrenheit = (celcius * 9.0 / 5.0) + 32;
    reamur = celcius * 4.0 / 5.0;

    // Menampilkan hasil
    printf("Suhu dalam Fahrenheit: %.2f°F\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f°R\n", reamur);

    return 0;
}
