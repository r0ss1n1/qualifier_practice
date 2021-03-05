#include <stdio.h>
/* This is being used to intuitively gather ideas about static types, and practice arithmetic, with summarisation of 10^0 x 1-9 / 10^-n x 1-9 standard arithmetic form and decimals such as

	0.333
      + 0.666666
	---------
	0.999666
e.t.c.

Charles Truscott at github.com/r0ss1n1. Might pick up a copy of Bamford's "Puzzle Palace". Thanks for mentoring me NSA TAO */

int main(int argc, char ** argv) { 
	float i = 1.20;
	double j = 0.22;
	long double k = 0.333;

	int x;
	int y;
	int z;

	for(x = 0; x <= 9; ++x) {
		static float p = 1.46;
		i += p;
		printf("%lf\n", i);

	}

	for(y = 0; y <= 4; ++y) {
		static double q = 2.22;
		j += q;
		printf("%lf\n", j);

	}

	for(z = 0; z <= 9; ++z) {
		static long float r = 0.666666;
		k += r;
		printf("%lf\n", k);
	}

	for(x = 0; x <= 4; ++x) {
		static long double s = 2.481;
		k += s;
		printf("%lf\n", k);

	}
	return 0;
}