#ifndef MATHFUNC_H
#define MATHFUNC_H
#include "datatype.h"

//return result x^y
int pow10(uint8_t x, uint_t y)
{
    int res;
    for (uint8_t i; i<y; i++)
    {
        res=res*x;
    }
    return res;
}

#endif // MATHFUNC_H
