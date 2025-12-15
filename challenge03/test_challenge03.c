#include <stdio.h>
#include <stddef.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

size_t mi_strlen(const char *s);
int mi_strcmp(const char *s1, const char *s2);
char *mi_strcpy(char *dest, const char *src);

void len_test(const char *s)
{
    printf("Testing %s\n", s);
    assert(mi_strlen(s) == strlen(s));
}

void len_suit()
{
    len_test("hellow world\n");
    len_test("");
    len_test("THIS IS A VERYYYYYY LONG string 010101030303 with some random input@@@ ####$$$$\% ^&**(())_");
    printf("--- All len tests passed ---\n");
}

void cmp_test(const char *s1, const char *s2)
{
    printf("Testing %s, %s\n", s1, s2);
    assert(mi_strcmp(s1, s2) == strcmp(s1, s2));
}

void cmp_suit()
{
    cmp_test("wololooo", "wololooo");
    cmp_test("wolalooo", "wololooo");
    cmp_test("wolulooo", "wololooo");
    cmp_test("woluloooo", "wololooo");
    cmp_test("wolulooo", "wololoooo");
    cmp_test("", "wololoooo");
    cmp_test("wolulooo", "");
    cmp_test("", "");
    printf("--- All compare tests passed --- \n");
}

void cpy_test(char *s)
{
    // char my_res[50];
    // char lib_res[50];
    char* my_res = malloc(1000);
    char* lib_res = malloc(1000);
    printf("Testing %s\n", s);
    mi_strcpy( my_res, s);
    strcpy( lib_res, s);
    assert(strcmp(my_res, lib_res) == 0);
    printf("--- All copy tests passed --- \n");
}

void cpy_suit()
{
    cpy_test("Hellow");
    cpy_test("");
}

int main() {
    len_suit();
    cmp_suit();
    cpy_suit();
    printf("ALL TESTS PASSED \n");
    return 0;

}