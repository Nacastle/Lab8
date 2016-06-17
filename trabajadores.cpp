#include "robot.h"
#include "trabajadores.h"
#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;

Trabajadores::Trabajadores(string serie, string material, double amperios, double precio):Robot(serie, material, amperios, precio){

}



string Trabajadores::toString()const{
	stringstream ss;
	ss << "Trabajadores: " << Robot::toString();
	return ss.str();
}