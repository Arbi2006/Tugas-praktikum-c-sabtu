#include <stdio.h>


int main()
{
	
	int a;
	
	printf("Masukan Bilangan Bulat: ");
	scanf("%d", &a);
	 
	 if( a%2 == 1) {
	 	printf ("\nGanjil", a);
	 }else {
	 	printf("\nGenap", a);
	 }
	
	return 0;
}