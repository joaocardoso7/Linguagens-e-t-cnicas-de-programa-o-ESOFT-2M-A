#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	float a,b,c;
	 float r1, r2, r3;
	 	
	a = 8;
	b = 19;
	r1 = a/b;
	r2 = a-b;
	r3 = a+b;
	c = a*b;
	
	printf("As oporações entre %f e %f são / %f - %f + %f *%f", a,b, r1, r2, r3, c);
	
	return 0;
}
