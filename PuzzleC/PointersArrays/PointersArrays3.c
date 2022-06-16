#include "defs.h"

int a[3][3] = {
	{1,2,3},
	{4,5,6},
	{7,8,9},
};

int *pa[3] = {
	a[0], a[1], a[2]
};

int *p = a[0];

int main(){

	int i;
	for (i = 0; i < 3; i++)
		PRINT3(d,a[i][2-i], *a[i], *(*(a + i)+i));
	NL;
	for (i = 0; i < 3; i++)
		PRINT2(d, *pa[i], p[i]);


}
