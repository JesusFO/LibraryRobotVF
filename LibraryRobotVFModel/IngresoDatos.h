#pragma once

using namespace System;

namespace LibraryRobotVFModel {

	public ref class IngresoDatos {

	private:
		int idIngreso;
		int codigo;
		String^ correo;
		String^ cuenta;
		String^ telefono;

	public:
		IngresoDatos();
		IngresoDatos(int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono);

	};

}