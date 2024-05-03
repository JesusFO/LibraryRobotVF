#pragma once

#include "IngresoDatos.h"
using namespace System;

namespace RobotBibliotecaModel {

	public ref class Registro: IngresoDatos {

	private:
		int idRegistro;
		String^ direccion;
		String^ DNI;
		String^ contrase�a;
		String^ fecha;

	public:
		Registro();
		Registro(int idRegistro, String^ Direccion, String^ DNI, String^ Contrase�a, String^ fecha, int codigo, String^ correo, String^ cuenta, String^ telefono);
	};

}
