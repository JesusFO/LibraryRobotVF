#include "IngresoDatos.h"

using namespace LibraryRobotVFModel;

IngresoDatos::IngresoDatos() {

}

IngresoDatos::IngresoDatos(int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono) {
	this->idIngreso = idIngreso;
	this->codigo = codigo;
	this->correo = correo;
	this->cuenta = cuenta;
	this->telefono = telefono;
}


