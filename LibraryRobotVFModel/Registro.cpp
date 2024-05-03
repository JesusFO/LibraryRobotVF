#include "Registro.h"

using namespace LibraryRobotVFModel;

Registro::Registro() {

}

Registro::Registro(int idRegistro, String^ direccion, String^ DNI, String^ contraseņa, String^ fecha, int codigo, String^ correo, String^ cuenta, String^ telefono): IngresoDatos(idIngreso, codigo, correo, cuenta, telefono) {

	this->idRegistro = idRegistro;
	this->direccion = direccion;
	this->DNI = DNI;
	this->contraseņa = contraseņa;
	this->fecha = fecha;
}


