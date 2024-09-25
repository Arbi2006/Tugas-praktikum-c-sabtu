#include   <stdio.h>

int main()
{
    int a, b, c;
    printf("luas persegi panjang\n\n");
    printf("panjang =");
    scanf("%d", &a);
    printf("lebar =");
    scanf("%d", &b);
    c = a * b;
    printf("\n\n %d * %d = %d\n", a, b, c);
    return 0;
}