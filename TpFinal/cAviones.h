#pragma once
#include <string>
#include <iostream>
using namespace std;
class cAviones
{
	enum Estado
	{
		despegando = 1,
		volando = 2,
		aterrizando = 3,
        estacionado=4,
	};
protected:
	int static codigoEstatico;
	int codigo;
	string tipo;//carga o pasajeros
	Estado estado;//despegando,volando, aterrizando,estacionado
	string modelo;
	int capTanque;
	int cantHelices;
	float tiempoMax;
	float tiempoAterrizaje;
	float tiempoDespegue;
	float tamañoAvion;
	float velocidadDespegue;
	int cantPasajeros;
	float carga;
	float aceleracion;

public:
	string getclave() { return to_string(codigo); }
	void aterrizar();
	void despegar();
	void regularVelocidad();
	void pedirPista();
	void setAceleracion();
	void Listar();
	cAviones(string t, string m, int cT, int tA, int tD, float tam);//le paso los atributos que no dependen del modelo
	~cAviones();
	cAviones();
};

