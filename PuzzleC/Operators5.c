#include<stdio.h>
#define PRINT(a,b,c,d) printf("Operators %d.%d:  %d = %d \n",a,b,c,d);
#define PRINTX(x) printf("int = %d\n",x);


int main() {

	int x = 1, y = 1, z = 1;
	int X = 1, Y = 1, Z = 1;

	x += y += z;
	X += Y += Z;
	
	PRINT(5,1, x < y ? y : x, ((X < Y) ? Y : X));

	PRINT(5,2, x < y ? x ++ : y ++, ((X < Y ) ? (X++) : (Y++)));

	PRINT(5,3,(z += x < y  ? x ++ : y ++ ),( (Z += (X < Y) ? (X++) : (Y++))));

	x = 3; y = z = 4;
	X = 3; Y = Z = 4;
	PRINT(5,4,(z >= y >= x  ? 1 : 0), ( ( X >= Y >= X) ? 1 : 0));

	PRINT(5,5,(z >= y && y >= x), ( ( Z >= Y ) && ( Y >= X)));




}
