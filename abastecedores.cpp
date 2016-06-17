#include "robot.h"
#include "abastecedores.h"
#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;

Abastecedores::Abastecedores(string serie, string material, double amperios, double precio):Robot(serie, material, amperios, precio){
	
}

void Abastecedores::trabajo(double& dinero, double& amperaje, int robot){
	dinero-=robot*100;
	amperaje-= this->amperios;
}

string Abastecedores::toString()const{
	stringstream ss;
	ss << "Abastecedores: " << Robot::toString();
	return ss.str();
}