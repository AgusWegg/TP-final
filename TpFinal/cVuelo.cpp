#include "cVuelo.h"



void cVuelo::Listar()
{
}

int cVuelo::codigoEstatico = 1;//los aviones se empiecen a crear desde el 1000

cVuelo::cVuelo(cBiplano *avion)
{
	codigo = codigoEstatico;
	codigoEstatico++;
	miAvionBiplano = avion;
	tipoVuelo = miAvionBiplano->tipo;
	miAvionCessna = NULL;
}

cVuelo::cVuelo(cCessna *avion)
{
	codigo = codigoEstatico;
	codigoEstatico++;
	miAvionCessna = avion;
	tipoVuelo = miAvionCessna->tipo;
	miAvionBiplano = NULL;
}

cVuelo::~cVuelo()
{
}
