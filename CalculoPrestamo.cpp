// Archivo: CalculoPrestamo.cpp

// Alumno: Noel Muñoz Ramírez

// Profesor: Maikol Guzman

// Universidad Nacional

// Fecha: 09/08/2019

#include <iostream>
#include <string>
#include "CalculoPrestamo.h"
using::std::string;

//Constructor sin parametros
CalculoPrestamo::CalculoPrestamo() {
	setMonto(0);
}

//Constructor con parametros
CalculoPrestamo::CalculoPrestamo(float monto): monto(monto) {}

void CalculoPrestamo::setMonto(float) {}
float CalculoPrestamo::getMonto() { return monto; }

//Metodos Privados
float CalculoPrestamo::obtenerPorcentaje(std::string porcentajeTXT) {
	return (std::stof(porcentajeTXT))/100;
}

int CalculoPrestamo::calcularTiempoEnMeses(std::string tiempoTXT) {
	return std::stof(tiempoTXT)*12;
}

float CalculoPrestamo::calcularInteresMensual(float balance, float tasaAnual) {
	return (balance*tasaAnual)/12;
}

//Metodo Publico
std::string CalculoPrestamo::reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT) {
	return "";
}


