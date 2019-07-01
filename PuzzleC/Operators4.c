#include<stdio.h>
#define PRINT(a,b,c,d) printf("Operators %d.%d:  %d = %d \n",a,b,c,d);

int main()
{
	int x,y,z;
	int X,Y,Z;

	//Operators 4.1
	x = 03; y = 02; z = 01;
	X = 03; Y = 02; Z = 01;
	PRINT(4,1,(x | y & z), (X | (Y & Z)) );


	PRINT(4,2,(x | y & ~ z),(X | ( Y  & (~Z) )) );

	PRINT(4,3,(x ^ y * -z), (X ^ (Y * -Z)) );

	PRINT(4,4,(x & y && z), (X & (Y && Z)) );


	x = 1; y = -1;
	X = 1; Y = -1;
	PRINT(4,5,( ! x | x ), ( (!X) | X) );
	PRINT(4,6,( ~ x | x ), ( (~X) | X) );
	PRINT(4,7,( x ^ x), ( X ^ X ) );

	PRINT(4,8,(x <<= 3),X = (X << 3));
	PRINT(4,9,y <<= 3,Y = (Y << 3));
	PRINT(4,10,y >>= 3, Y = (y >> 3));


}
