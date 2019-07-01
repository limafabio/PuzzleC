#include<stdio.h>
#define PRINT(a,b,c,d) printf("Operators %d.%d: %d = %d \n", a,b,c,d);

int main()
{
	int x, y, z;
	int X, Y, Z;
	x = 2; y = 1; z = 0;
	X = 2; Y = 1; Z = 0;

	PRINT(3,1, x = x && y || z, X = ((X && Y) || Z));
		
	PRINT(3,2,(x || y && z),(X || ( Y  && Z)));

	x = y = 1;
	z = x ++ -1;
	Z = 0; X = Y = 1;
	Z = (X++) -1;
	PRINT(3,3,z,Z);
	PRINT(3,3,x,X);

	PRINT(3,4, z += -x ++ + ++ y, Z += -(X++) + (+ 1 + Y));
	PRINT(3,4,x,X);

	PRINT(3,5, z = x / ++ x , Z = (X / (++X)) );

}
