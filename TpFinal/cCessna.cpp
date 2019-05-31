#include "cCessna.h"



cCessna::cCessna(string ti, string m, int cT, int tA, int tD, float tam, int psj, float c)
{
	cAviones::cAviones(ti,m,cT,tA, tD, tam);
	cantHelices = 1;
	if (ti == "carga")
	{
		cantPasajeros = 0;
		carga = c;
	}
	else
	{
		if (ti == "pasajeros")
		{
			cantPasajeros = psj;
			carga = 0;
		}
		else						//aca habria que hace un catch para si alguno de estos es -1
		{
			cantPasajeros = -1;
			carga = -1;
		}
		
	}
	
}

void cCessna::despegue() {
	despegar();
	velocidadDespegue = 200;
	alerones = bajos;
	controlEstabilizacion = prendido;
}

cCessna::~cCessna()
{
}
