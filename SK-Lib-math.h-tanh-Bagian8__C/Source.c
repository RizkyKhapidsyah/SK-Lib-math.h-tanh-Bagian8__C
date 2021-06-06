#include <stdio.h>
#include <math.h>
#include <conio.h>

/*  Source by CPPReference
    Modified For Learn by Rizky Khapidsyah
    I.D.E : VS2019 */

int main() {
    printf("tanh(1) = %f\ntanh(-1) = %f\n", tanh(1), tanh(-1));
    printf("tanh(0.1)*sinh(0.2)-cosh(0.2) = %f\n", tanh(0.1) * sinh(0.2) - cosh(0.2));
    // special values
    printf("tanh(+0) = %f\ntanh(-0) = %f\n", tanh(0.0), tanh(-0.0));

    _getch();
    return 0;
}