#include<stdio.h>

int main(){
	
	int A,B,C,D,E,F,OTHER,DIGIT,ALPHA;
	char c;
	A = B = C = D = OTHER = DIGIT = ALPHA = 1;

	while(A) {
		if (!B) 
			C;
	}

	while (A) {
		B;
		C;
	}


	if (A & B & C) D;
	else 
		if (!A & B & C) E;
		if (!A & B & !C) F;


	while ( (c=getchar()) != '\n') {

		if ( c != ' ' && c != '\t') return OTHER;
		else if (c >= '0' && c <= '9') return DIGIT;
		else if (c >= 'a' && c <= 'z') return ALPHA;
		return (OTHER);
	}

}
