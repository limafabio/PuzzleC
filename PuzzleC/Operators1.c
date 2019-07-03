#include<stdio.h>
#define PRINT(a,b,c,d) printf("Operators %d.%d:  %d = %d \n",a,b,c,d);

int main() {
	int x;
	int z;
	
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
}
