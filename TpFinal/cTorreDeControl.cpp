#include "cTorreDeControl.h"



cTorreDeControl::cTorreDeControl()
{
	ListaAviones = new cListaT<cAviones>();
	ListaPistas = new cListaT<cPistas>();
	ListaVuelos = new cListaT<cVuelo>();
}


cTorreDeControl::~cTorreDeControl()
{
}
