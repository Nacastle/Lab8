#include "robot.h"
#include "sirviente.h"
#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;

Sirviente::Sirviente(string serie, string material, double amperios, double precio, int oxido):Robot(serie, material, amperios, precio){
	this->oxido = oxido;
}

int Sirviente::getOxido(){
	return oxido;
}
void Sirviente::setOxido(int oxido){
	this->oxido = oxido;
}

void Sirviente::trabajo(double& dinero, double& amperaje, int robot){
	this->oxido += 5;
	amperaje-= this->amperios;
}

string Sirviente::toString()const{
	stringstream ss;
	ss << "Sirviente: " << Robot::toString() << "oxido: " << oxido;
	return ss.str();
}