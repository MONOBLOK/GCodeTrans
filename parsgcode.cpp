#include "parsgcode.h"

ParsGCode::ParsGCode()
{

}

 void ParsGCode::SetGCString(const char *GCstr, int nsym)
{
    char GCComm;
    for (int i=0; i<nsym;i++)
    {
        if (GCstr[i]>=65&&GCstr[i]<=90)
        {
            GCComm = GCstr[i];
        }
    }
}

void ParsGCode::ParsGC(QList<QString> GCCommand, QList<QString> GCParam)
{

}

