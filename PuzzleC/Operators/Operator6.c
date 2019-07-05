#include<stdio.h>

#define PRINT3(m,n,x,y,z,a,b,c) printf("Operators %d.%d: x %d=%d  y %d=%d  z %d=%d\n",m,n,x,y,z,a,b,c);

int main(){

	int x,y,z,w;
	int X,Y,Z,W;
	x = y = z = 1;
	X = Y = Z = 1;

	++x || ++y && ++z;
	((++X) || ((++Y)) && (++Z));
	PRINT3(6,1,x,X,y,Y,z,Z);
	

	x = y = z = 1;
	X = Y = Z = 1;
	++x && ++y || ++z;
	(((++X) && (++Y)) || (++Z));
	PRINT3(6,2,x,X,y,Y,z,Z);

	x = y = z = 1;
	X = Y = Z = 1;
	++x && ++y && ++z;
	(((++X) && (++Y)) && (++Z));
	PRINT3(6,3,x,X,y,Y,z,Z);

	x = y = z = -1;
	X = Y = Z = -1;
	++x && ++y || ++z;
	(((++X) && (++Y)) || (++Z) );
	PRINT3(6,4,x,X,y,Y,z,Z);

	x = y = z = -1;
	X = Y = Z = -1;
	++x || ++y && ++z;
	((++X) || ((++Y) && (++Z)));
	PRINT3(6,5,x,X,y,Y,z,Z);

	x = y = z = -1;
	X = Y = Z = -1;
	++x && ++y && ++z;
	(((++X) && (++Y)) && (++Z));
	PRINT3(6,6,x,X,y,Y,z,Z);
}
