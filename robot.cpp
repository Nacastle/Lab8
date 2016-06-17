#include "robot.h"
#include <string>
#include <sstream>
#include <iostream>
using std::string;
using std::stringstream;

Robot::Robot(string serie, string material, double amperios, double precio){
	this->serie = serie;
	this->material = material;
	this->amperios = amperios;
	this->precio = precio;
}

string Robot::getSerie(){
	return serie;
}
string Robot::getMaterial(){
	return material;
}
double Robot::getAmperios(){
	return amperios;
}
double Robot::getPrecio(){
	return precio;
}
void Robot::setSerie(string serie){
	this->serie = serie;
}
void Robot::setMarterial(string material){
	this->material = material;
}
void Robot::setAmperios(double amperios){
	this->amperios = amperios;
}
void Robot::setPrecio(double precio){
	this->precio = precio;
}

string Robot::toString()const{
	stringstream ss;
	ss << "Robot: " << serie << material << amperios << precio;
	return ss.str();
}