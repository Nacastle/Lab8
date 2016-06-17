#include "robot.h"
#include "trabajadores.h"
#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;

Trabajadores::Trabajadores(string serie, string material, double amperios, double precio, double ganado, double gastado):Robot(serie, material, amperios, precio){
	this->ganado = ganado;
	this->gastado = gastado;
}

double getGanado(){
	return ganado;
}

double getGastado(){
	return gastado;
}
void setGastado(double ganado){
	this->ganado = ganado;
}
void setGanado(double gastado){
	this->gastado = gastado;
}

string Sirviente::toString()const{
	stringstream ss;
	ss << "Trabajadores: " << Robot::toString() << "Ganado: " << ganado << "Gastado: " << gastado;
	return ss.str();
}