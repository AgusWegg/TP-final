#pragma once
#include "cAviones.h"
class cCessna: public cAviones
{
	enum alerones
	{
		bajos = false,
		subidos = true,
	};
	enum control
	{
		apagado = false,
		prendido = true,
	};
	friend class cVuelo;
	alerones alerones;
	control controlEstabilizacion;
public:
	void despegue();
	void setEstadoControl(bool c) { controlEstabilizacion = c; }
	cCessna(string t, string m, int cT, int tA, int tD, float tam, int psj, float c);
	~cCessna();
};

