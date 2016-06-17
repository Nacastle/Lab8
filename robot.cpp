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

string getSerie(){
	return serie;
}
string getMaterial(){
	return material;
}
double getAmperios(){
	return amperios;
}
double getPrecio(){
	return precio;
}
void setSerie(string serie){
	this->serie = serie;
}
void setMarterial(string material){
	this->material = material;
}
void setAmperios(double amperios){
	this->amperios = amperios;
}
void setPrecio(double precio){
	this->precio = precio;
}

string Robot::toString()const{
	stringstream ss;
	ss << "Robot: " << serie << material << amperios << precio;
	return ss.str();
}