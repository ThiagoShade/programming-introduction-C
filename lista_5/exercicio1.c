    #include <stdio.h>
     
    int main() {
     
        int i, j;
        double M[2][2], det;
     
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) scanf("%lf", &M[i][j]);
        }
     
        det = (M[0][0]*M[1][1]) - (M[0][1]*M[1][0]);
     
        printf("%.2lf\n", det);
     
        return 0;
    }
