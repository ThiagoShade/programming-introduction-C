#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"

Matrix * matrix_new( int nl, int nc ) {
	Matrix * m = NULL;
	int l;

	m = (Matrix *) calloc( 1, sizeof(Matrix) );

	(*m).nl = nl;    // m->nl = nl;
	m->nc = nc;

	m->px = (pixel **) calloc(nl, sizeof(pixel *) );

	for(l=0;l<nl;l++) {
		m->px[l] = (pixel *) calloc(nc, sizeof(pixel)) ;
	}
	return m;
}

void matrix_free( Matrix * m ) {
	int l;
	for(l=0; l < (m->nl) ; l++ ) {
		free( m->px[l] );
	}
	free( m->px );
	free( m );
}

Matrix * read_pgm(void) {
	char tipo[32];
	int nl, nc, l, c;
	int pixelval;
	Matrix * m = NULL;
	scanf("%s", tipo);
	if( strcmp("P2", tipo) != 0 ) {
		printf("Arquivo invalido\n");
		exit(0);
	}
	scanf("%d %d %*d", &nc, &nl);
	m = matrix_new(nl,nc);
	for(l=0;l<m->nl;l++) {
		for(c=0;c<m->nc;c++) {
			scanf("%d", &pixelval);
			m->px[l][c] = (pixel) pixelval;
		}
	}
	return m;
}

void matrix_print_pgm( Matrix * m) {
	int l, c;
	printf("P2\n%d %d\n255\n", m->nc, m->nl);
	for(l=0;l<m->nl;l++) {
		for(c=0;c<m->nc;c++) {
			printf("%d ", m->px[l][c]);
		}
		printf("\n");
	}
}

void matrix_norm( Matrix * m) {
	int l, c;
	pixel maior, menor;
	double tx;

	maior = menor = m->px[0][0];

	for(l=0;l<m->nl;l++) {
		for(c=0;c<m->nc;c++) {
			if( m->px[l][c] > maior ) maior = m->px[l][c];
			if( m->px[l][c] < menor ) menor = m->px[l][c];
		}
	}
	
	for(l=0;l<m->nl;l++) {
		for(c=0;c<m->nc;c++) {
			m->px[l][c] = (m->px[l][c] - menor) * 255.0 / (maior-menor);
		}
	}
}

void matrix_dx( Matrix * m, Matrix * dx) {
	int l, c;
	for(l=0; l<m->nl; l++) {
		for(c=1; c < m->nc-1 ; c++) {
			dx->px[l][c] = (m->px[l][c+1] - m->px[l][c-1])/2.0;
		}
	}
}

void matrix_dy( Matrix * m, Matrix * dy) {
	int l, c;
	for(l=1; l<m->nl-1; l++) {
		for(c=0; c < m->nc; c++) {
			dy->px[l][c] = (m->px[l+1][c] - m->px[l-1][c])/2.0;
		}
	}
}

void matrix_mag( Matrix * dx, Matrix * dy, Matrix * mag) {
	double x, y;
	int l, c;
	for(l=0; l<mag->nl; l++) {
		for(c=0; c < mag->nc; c++) {
			x = dx->px[l][c];
			y = dy->px[l][c];
			mag->px[l][c] = sqrt(x*x + y*y);
		}
	}	
}


void matrix_inv( Matrix * dx) {
	double x, y;
	int l, c;
	for(l=0; l<dx->nl; l++) {
		for(c=0; c < dx->nc; c++) {
			dx->px[l][c] = 255 - dx->px[l][c];
		}
	}	
}