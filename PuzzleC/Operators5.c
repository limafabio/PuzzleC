#include<stdio.h>
#define PRINT(a,b,c,d) printf("Operators %d.%d:  %d = %d \n",a,b,c,d);

int main() {

	int x = 1, y = 1, z = 1;
	int X = 1, Y = 1, Z = 1;
	
	PRINT(5,1, x < y ? y : x, ((X < Y) ? Y : X));

	PRINT(5,2, x < y ? x ++ : y ++, ((X < Y ) ? (X++) : (Y++)));




}
