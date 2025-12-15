#include <stdio.h>
#include <assert.h>


int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
int division(int a, int b);

int main()
{
    assert(suma(2,3) == 5);
    assert(suma(-2,3) == 1);
    assert(suma(2,-3) == -1);
    assert(suma(-2,-3) == -5);

    assert(resta(2,3) == -1);
    assert(resta(-2,3) == -5);
    assert(resta(2,-3) == 5);
    assert(resta(-2,-3) == 1);

    assert(multiplicacion(2,3) == 6);
    assert(multiplicacion(-2,3) == -6);
    assert(multiplicacion(2,-3) == -6);
    assert(multiplicacion(-2,-3) == 6);

    assert(division(9,3) == 3);
    assert(division(-12,3) == -4);
    assert(division(9,-3) == -3);
    assert(division(-12,-3) == 4);
    printf("ALL TESTS PASSED");
}