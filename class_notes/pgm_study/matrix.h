typedef int pixel;

struct matrix {
	int nl, nc;
	pixel ** px;
};

typedef struct matrix Matrix;

Matrix * matrix_new( int nl, int nc );
void matrix_free( Matrix * m );
Matrix * read_pgm(void);
void matrix_dx( Matrix * m, Matrix * dx);
void matrix_dy( Matrix * m, Matrix * dy);
void matrix_mag( Matrix * dx, Matrix * dy, Matrix * mag);
void matrix_norm( Matrix * m);
void matrix_print_pgm( Matrix * m);
void matrix_inv( Matrix * dx);