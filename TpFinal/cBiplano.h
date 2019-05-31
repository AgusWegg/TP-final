#pragma once
#include "cAviones.h"
class cBiplano: public cAviones
{
	friend class cVuelo;
	float inclinacion;
public:
	cBiplano(string ti, string m, int cT, int tA, int tD, float tam, int psj);
	~cBiplano();
};

