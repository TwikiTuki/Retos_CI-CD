#include <stddef.h>

size_t mi_strlen(const char *s)
{
    if (s == NULL)
        return 0;

    int ret = 0;
    while(s[ret])
        ret++;

    return ret;
}

int mi_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    if (s1 == NULL || s2 == NULL)
        return 0;

    while(s1[i] && s2[1] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

char *mi_strcpy(char *dest, const char *src)
{
    int i = 0;

    if (!dest)
        return dest;
    while(src[i])
        dest[i] = src[i];
    return dest;
}