#include "bit-wsg.h"
#include "ckmaker-bit.h"


uint8_t wsgClass::getDam()
{
    return bitReadReg8(BIT_WSG_ADD,REG_WSG_SHIDU);
}

uint8_t wsgClass::getTem()
{
    return bitReadReg8(BIT_WSG_ADD,REG_WSG_WENDU);
}

uint8_t wsgClass::getLum()
{
    return bitReadReg8(BIT_WSG_ADD,REG_WSG_GUANGDU);
}