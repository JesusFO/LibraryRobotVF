#pragma once

#include "IngresoDatos.h"
using namespace System;

namespace LibraryRobotVFModel {

	public ref class Registro: IngresoDatos {

	private:
		int idRegistro;
		String^ direccion;
		String^ DNI;
		String^ contraseņa;
		String^ fecha;

	public:
		Registro();
		Registro(int idRegistro, String^ Direccion, String^ DNI, String^ Contraseņa, String^ fecha, int codigo, String^ correo, String^ cuenta, String^ telefono);
	};

}
