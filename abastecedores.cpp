#include "robot.h"
#include "abastecedores.h"
#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;

Abastecedores::Abastecedores(string serie, string material, double amperios, double precio, double derrochador):Robot(serie, material, amperios, precio){
	this->derrochador = derrochador;
}

double getDerrochador(){
	return derrochador;
}
void setDerrochador(double derrochador){
	this->derrochador = derrochador;
}

string Sirviente::toString()const{
	stringstream ss;
	ss << "Abastecedores: " << Robot::toString() << "Gasta: " << derrochador;
	return ss.str();
}