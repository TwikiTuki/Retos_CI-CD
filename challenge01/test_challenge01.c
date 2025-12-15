#include "stdio.h"
#include <assert.h>
#include <stdio.h>

int suma(int a, int b);

int main(){
    assert(suma(2,3) == 5);
    assert(suma(-2,3) == 1);
    assert(suma(2,-3) == -1);
    assert(suma(-2,-3) == -5);
    printf("ALL TEST PASSED");
}