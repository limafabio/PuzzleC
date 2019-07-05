#include<stdio.h>

<<<<<<< HEAD
#define PRINT(a,b,c,d) printf("Operators %d.%d: %d = %d \n", a,b,c,d);
=======
#define PRINTX printf("%d\n",x);
#define PRINTY printf("%d\n",y);
#define PRINTZ printf("%d\n",z);
#define PRINTRESUL printf("compare results: %d %d\n", x, X);
>>>>>>> operators5

int main(){

	int x = 2, z, y;
	int X = 2, Z, Y;

<<<<<<< HEAD
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
=======
	//Operator 2.1
	//first sum 3 + 2 then x * 5 
	x *= 3 + 2;
	X = X * (3 + 2); PRINTRESUL;

	//Operator 2.2
	//first execute set z = 4 and y = 4 then multiple x * y 
	x *= y = z = 4;
	X = 10;
	Y = Z = 4;
	X = X*Z; PRINTRESUL;

	//Operator 2.3
	//compare y with z and set result in x
	x = y == z;
	Y = Z = 0;
	X = (Y == Z); PRINTRESUL;

	//Operator 2.4
	//compare y with z then compares with x and set x
	x == ( y == z );  PRINTX;
>>>>>>> operators5

}
