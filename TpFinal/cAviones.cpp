#include "cAviones.h"


int cAviones::codigoEstatico = 1000;//los aviones se empiecen a crear desde el 1000
void cAviones::aterrizar()
{
}

void cAviones::despegar()
{
}

void cAviones::regularVelocidad()
{
}

void cAviones::pedirPista()
{
}

void cAviones::setAceleracion()
{
}

void cAviones::Listar()
{
}

cAviones::cAviones(string t,string m, int cT, int tA, int tD, float tam)
{
    codigo =codigoEstatico;
	codigoEstatico++;
	tipo = t;
	modelo = m;
	capTanque = cT;
	//tiempoMax= como sacar el tiempo maximo respecto a la capacidad del tanque
	tiempoAterrizaje = tA;
	tiempoDespegue = tD;
	tamañoAvion = tam;
	estado = estacionado;//inicio todos como estacionados
	cantHelices = 0;//lo inicializo en un valor cualquiera para despues asignarselo en los hijos
	velocidadDespegue = 0;



}


cAviones::~cAviones()
{
}

cAviones::cAviones()
{
}
