#pragma once
#include <string>
#include <iostream>
using namespace std;
class cPistas
{
private:
	bool estado;
	float tama�o;
	int codigo;
public:
	string getclave() { return to_string(codigo); }
	void setEstado(bool e) { estado = e; }
	bool getEstado() { return estado; }
	int getCodigoPista() { return codigo; }
	void Listar();
	cPistas();
	~cPistas();
};

