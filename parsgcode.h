#ifndef PARSGCODE_H
#define PARSGCODE_H
#include <QString>
#include <QList>
#include "datatype.h"
#include "mathfunc.h"


class ParsGCode
{
public:
    ParsGCode();
    void SetGCString(uint8_t *GCstr, uint8_t nsym);
    uint8_t ParsGC(uint8_t *GCstr, uint8_t nsym);




};

#endif // PARSGCODE_H
