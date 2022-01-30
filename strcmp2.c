#include "strcmp2.h"

// Strcmp2 library returning true if input equals, false if unqueal
int strcmp2(const char *p1, const char *p2)
{
    const unsigned char *s1 = (const unsigned char *)p1;
    const unsigned char *s2 = (const unsigned char *)p2;
    unsigned char c1, c2;
    do
    {
        c1 = (unsigned char)*s1++;
        c2 = (unsigned char)*s2++;
        if (c1 == '\0')
            return 1;
    } while (c1 == c2);
    return 0;
}