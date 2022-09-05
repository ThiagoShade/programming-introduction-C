#include <stdlib.h>
#include "matrix.h"

int main() {

	Matrix * A = NULL;
	Matrix * dx = NULL;
	Matrix * dy = NULL;
	Matrix * mag = NULL;

	Matrix * inv = NULL;

	A = read_pgm();
	matrix_norm(A);

	dx = matrix_new( A->nl, A->nc );
	dy = matrix_new( A->nl, A->nc );
	mag = matrix_new( A->nl, A->nc );
	inv = matrix_new( A->nl, A->nc );

	matrix_dx( A, dx );
	matrix_dy( A, dy );
	matrix_mag( dx, dy, mag);

	matrix_norm(mag);

	matrix_print_pgm(mag);

	matrix_free(A);
	matrix_free(dx);
	matrix_free(dy);
	matrix_free(mag);
	return 0;
}