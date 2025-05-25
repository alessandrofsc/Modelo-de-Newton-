#include <stdio.h>
#include <math.h>

double f(double x) {
    return x * x - 2;
}

double df(double x) {
    return 2 * x;
}

int main() {
    double x0 = 1.0; 
    double tol = 1e-6; 
    int max_iter = 100;
    int iter = 0;
    double x1;

    do {
        double dfx0 = df(x0);
        if (dfx0 == 0) {
            printf("Derivada zero. Método falhou.\n");
            return 1;
        }
        x1 = x0 - f(x0) / dfx0;
        iter++;
        if (fabs(x1 - x0) < tol) break;
        x0 = x1;
    } while (iter < max_iter);

    if (iter == max_iter) {
        printf("Método não convergiu após %d iterações.\n", max_iter);
    } else {
        printf("A raiz de 2 é aproximadamente: %.10f\n", x1);
        printf("Iterações realizadas: %d\n", iter);
    }

    return 0;
}