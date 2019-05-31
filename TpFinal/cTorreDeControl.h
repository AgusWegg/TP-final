#pragma once
#include "cListaT.h"
#include "cAviones.h"
#include "cPistas.h"
#include "cVuelo.h"

class cTorreDeControl
{
private:
	cListaT<cAviones>*ListaAviones;
	cListaT<cPistas>*ListaPistas;
	cListaT<cVuelo>*ListaVuelos;

public:
	void listarPistas();
	void listarAviones();
	void listarVuelos();
	int designarPista();//le devuelve una pista disponible y con el tamaño adecuado
	//void autorizarAvion();//chequea que todo este en orden

	cTorreDeControl();
	~cTorreDeControl();
};

