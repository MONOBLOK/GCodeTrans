#ifndef MATHFUNC_H
#define MATHFUNC_H
#include "datatype.h"

//return result 10^y
int pow10(uint_t y)
{
    int res;
    for (uint8_t i; i<y; i++)
    {
        res=res*10;
    }
    return res;
}

#endif // MATHFUNC_H
