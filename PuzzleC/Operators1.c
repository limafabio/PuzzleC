#include<stdio.h>

int main() {
	int x;
	int z;
	
	//Operators 1.1
	// first 4*5 then -3 or -6 
	x = -3 + 4 * 5 - 6;
	z = (-3 + (4 * 5)) - 6; printf ("to prove results: %d %d\n", x, z);
	//Operators 1.2
	// first 4 % 5 then 3 or -6 
	x = 3 + 4 % 5 - 6;
	z = (3 + (4 % 5) - 6); printf("to prove results: %d %d \n", x, z);
	//Operators 1.3
	// first -3 * 4  then -6 / 5 after execute results with -
	x = - 3 * 4 % - 6 / 5; 
	z = (-3 * 4) % (-6 / 5); printf("to prove results: %d %d\n", x, z);
	//Operators 1.4
	// first (7 + 6) after result % 5 then /2
	x = (7 + 6) % 5 / 2; 
	z = ((7+6) % 5) / 2; printf("to prove results: %d %d\n", x, z);
}
