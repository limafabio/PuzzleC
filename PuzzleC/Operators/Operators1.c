#include<stdio.h>
<<<<<<< HEAD
#define PRINT(a,b,c,d) printf("Operators %d.%d:  %d = %d \n",a,b,c,d);
=======
>>>>>>> operators5

int main() {
	int x;
	int z;
	
<<<<<<< HEAD
	x = -3 + 4 * 5 - 6;
	z = (-3 + (4 * 5)) - 6;
       	PRINT(1,1,x,z);

	x = 3 + 4 % 5 - 6;
	z = (3 + (4 % 5) - 6);
	PRINT(1,2,x,z);

	x = - 3 * 4 % - 6 / 5; 
	z = (-3 * 4) % (-6 / 5); 
	PRINT(1,3,x,z);

	x = (7 + 6) % 5 / 2; 
	z = ((7+6) % 5) / 2;
	PRINT(1,4,x,z);
=======
	// first 4*5 then -3 or -6 
	x = -3 + 4 * 5 - 6;
	z = (-3 + (4 * 5)) - 6; printf ("to prove results: %d %d\n", x, z);
	// first 4 % 5 then 3 or -6 
	x = 3 + 4 % 5 - 6;
	z = (3 + (4 % 5) - 6); printf("to prove results: %d %d \n", x, z);
	// first -3 * 4  then -6 / 5 after execute results with -
	x = - 3 * 4 % - 6 / 5; 
	z = (-3 * 4) % (-6 / 5); printf("to prove results: %d %d\n", x, z);
	// first (7 + 6) after result % 5 then /2
	x = (7 + 6) % 5 / 2; 
	z = ((7+6) % 5) / 2; printf("to prove results: %d %d\n", x, z);
>>>>>>> operators5
}
