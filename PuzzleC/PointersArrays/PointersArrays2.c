#include "defs.h"

int a[] = {0,1,2,3,4};
int *p[] = {a,a+1,a+2,a+3,a+4};
int **pp=p;

int main(){
	PRINT2(d,a,*a);
	PRINT3(d,p,*p,**p);
	PRINT3(d,pp,*pp,**pp);
	NL;

	pp++;
	PRINT3(d,pp-p,*pp-a,**pp);
	*pp++;
	PRINT3(d,pp-p,*pp-a,**pp);
	*++pp;
	PRINT3(d,pp-p,*pp-a,**pp);
	++*pp;
	PRINT3(d,pp-p,*pp-a,**pp);
	NL;

	pp=p;
	**pp++;
	PRINT3(d,pp-p,*pp-a,**pp);
	*++*pp;
	PRINT3(d,pp-p,*pp-a,**pp);
	++**pp;
	PRINT3(d,pp-p,*pp-a,**pp);
}
