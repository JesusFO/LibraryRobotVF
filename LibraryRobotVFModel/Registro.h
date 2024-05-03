#pragma once

#include "IngresoDatos.h"
using namespace System;

namespace RobotBibliotecaModel {

	public ref class Registro: IngresoDatos {

	private:
		int idRegistro;
		String^ direccion;
		String^ DNI;
		String^ contraseña;
		String^ fecha;

	public:
		Registro();
		Registro(int idRegistro, String^ Direccion, String^ DNI, String^ Contraseña, String^ fecha, int codigo, String^ correo, String^ cuenta, String^ telefono);
	};

}
