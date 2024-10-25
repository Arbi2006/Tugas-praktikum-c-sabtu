#include <stdio.h>

int main() 
{
	
	int n;
	
	printf("Masukan N: ");
	scanf("%d", &n);
	
	if( n > 50){
		n = n + 10;
	} else {
		n = n - 25;
	}
	
	printf("Nilai N: %d\n", n);
	
	return 0;
}