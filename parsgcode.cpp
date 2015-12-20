#include "parsgcode.h"

ParsGCode::ParsGCode()
{

}

 void ParsGCode::SetGCString(uint8_t *GCstr, uint8_t nsym)
{

}

uint8_t ParsGCode::ParsGC(uint8_t *GCstr, uint8_t nsym)
{
    uint8_t GCComm, GCNumber;

   // if (GCstr[0]==';') return 0;

    for (int i=0; i<nsym;i++)
    {
        if ((GCstr[i]>='A'&&GCstr[i]<='Z')||(GCstr[i]>='a'&&GCstr[i]<='z'))
        {
            GCComm = GCstr[i];
        }
        else
        {
            uint8_t num_c=0;
            while (GCstr[i]>='0'&&GCstr[i]<='9')
            {
                GCNumber=GCNumber+pow10(GCstr[i]-'0', num_c);
                num_c++;
                i++;
            }

        }
    }
}

