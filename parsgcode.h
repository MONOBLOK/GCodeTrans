#ifndef PARSGCODE_H
#define PARSGCODE_H
#include <QString>
#include <QList>


class ParsGCode
{
public:
    ParsGCode();
    void SetGCString(const char *GCstr, int nsym);
    void ParsGC(QList<QString> GCCommand, QList<QString> GCParam);




};

#endif // PARSGCODE_H
