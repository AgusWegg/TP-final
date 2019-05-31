#pragma once
#include "cBiplano.h"
#include "cCessna.h"
#include <string>
#include <iostream>
using namespace std;
class cVuelo
{private:
	
	int static codigoEstatico;
	int codigo;
	cBiplano *miAvionBiplano;
	cCessna *miAvionCessna;
	string tipoVuelo;
public:
	string getclave() { return to_string(codigo); }
	void Listar();
	cVuelo(cBiplano*);
	cVuelo(cCessna*);
	~cVuelo();
};

