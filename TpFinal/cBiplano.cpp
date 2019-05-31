#include "cBiplano.h"



cBiplano::cBiplano(string ti, string m, int cT, int tA, int tD, float tam, int psj)
{
	cAviones::cAviones(ti, m, cT, tA, tD, tam);
	cantHelices = 2;
	velocidadDespegue = 250;
	cantPasajeros = psj;
	carga = 0;//no permiten carga
}


cBiplano::~cBiplano()
{
}
