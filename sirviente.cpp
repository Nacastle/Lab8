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

int getOxido(){
	return oxido;
}
void setOxido(int oxido){
	this->oxido = oxido;
}

string Sirviente::toString()const{
	stringstream ss;
	ss << "Sirviente: " << Robot::toString() << "oxido: " << oxido;
	return ss.str();
}