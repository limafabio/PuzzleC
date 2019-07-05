#include<stdio.h>
#define PRINT(int) printf("%d\n",int)
#define PRINTRESUL(a,b) printf("compare result %d %d\n",a,b)

int main()
{
	int x, y, z;
	int X, Y, Z;
	x = 2; y = 1; z = 0;
	X = 2; Y = 1; Z = 0;

	//Operators 3.1
	x = x && y || z ; PRINT(x);
	X = ((X && Y) || Z); PRINTRESUL(x,X);
		
	//Operators 3.2
	int res;
	PRINT(x || y && z);
	res = (X || ( Y  && Z));
	PRINTRESUL( (x || y && z), res);

	//Operators 3.3
	x = y = 1;
	z = x ++ -1; PRINT(x); PRINT(z);
	Z = 0; X = Y = 1;
	Z = (X++) -1;
	PRINTRESUL(z,Z);
	PRINTRESUL(x,X);

	//Operators 3.4
	z += -x ++ + ++ y; PRINT(x); PRINT(z);
	Z += -(X++) + (+ 1 + Y);
	PRINTRESUL(z,Z);
	PRINTRESUL(x,X);

	//Operators 3.5
	z = x / ++ x; PRINT(z);
	Z = (X / (++X));
	PRINTRESUL(z,Z);

}
