#pragma once
#include "Robot.h"
#include "ConstanciaDePrestamo.h"
#include "ValoracionEntrega.h"
#include "SeguimientoPrestamo.h"

using namespace System;

namespace LibraryRobotVFModel {
	public ref class DetalleEntrega {
	private:
		int idEntrega;
		String^ declaracionPrestamo;
		String^ ubicacionCampus;
		SeguimientoPrestamo^ objSeguimiento;
		ValoracionEntrega^ objValoracionEntrega;
		Robot^ objRobot;
		ConstanciaDePrestamo^ objConstancia;
	public:
		//BobsConstructor
		DetalleEntrega();
		DetalleEntrega(int idEntrega, String^ declaracionPrestamo, String^ ubicacionCampus, SeguimientoPrestamo^ objSeguimiento, ValoracionEntrega^ objValoracionEntrega, Robot^ objRobot, ConstanciaDePrestamo^ objConstancia);
		//Get(ObtenerValor) - Set (DarValor)
		//idEntrega
		int getidEntrega();
		void setidEntrega(int idEntrega);
		//DeclaracionPrestamo
		String^ getDeclaracionPrestamo();
		void setDeclaracionPrestamo(String^ declaracionPrestamo);
		//UbicacionCampus
		String^ getUbicacionCampus();
		void setUbicacionCampus(String^ ubicacionCampus);
		//ObjSeguimiento
		SeguimientoPrestamo^ getObjSeguimiento();
		void setObjSeguimiento(SeguimientoPrestamo^ objSeguimiento);
		//ObjValoracion
		ValoracionEntrega^ getObjValoracion();
		void setObjValoracion(ValoracionEntrega^ objValoracionEntrega);
		//ObjRobot
		Robot^ getObjRobot();
		void setObjRobot(Robot^ objRobot);
		//ConstanciaDePrestamo
		ConstanciaDePrestamo^ getObjConstancia();
		void setObjConstancia(ConstanciaDePrestamo^ objConstancia);

	};
}