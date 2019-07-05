#include<stdio.h>

#define PRINT(a,b,c,d) printf("Operators %d.%d: %d = %d \n", a,b,c,d);

int main(){

	int x = 2, z, y;
	int X = 2, Z, Y;

	PRINT(2,1,x *= 3 + 2, X = X * (3 + 2));

	x *= y = z = 4;
	X = 10;
	Y = Z = 4;
	X = X*Z;
	PRINT(2,2, x *= y = z = 4, X);

	Y = Z = 0;
	PRINT(2,3,x = y == z, (X = (Y == Z)) );

	x == ( y == z );  
	PRINT(2,4,x == ( y == z), (X == (Y == Z)));

}
