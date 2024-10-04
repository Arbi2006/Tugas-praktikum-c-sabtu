#include <stdio.h>
#define PI 3.14159

int main() {
    float diameter = 15.0; // Diameter bola dalam cm
    float radius, volume;

    // Menghitung jari-jari dari diameter
    radius = diameter / 2;

    // Menghitung volume bola
    volume = (4.0 / 3.0) * PI * (radius * radius * radius);

    // Menampilkan hasil
    printf("Volume bola dengan diameter %.2f cm adalah %.2f cm^3\n", diameter, volume);

    return 0;
}
