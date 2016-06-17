#pragma once
#include "robot.h"
#include "sirviente.h"
#include <iostream>
#include <string>

class Trabajadores:public Robot{
	double ganado;
	double gasto;
public:
	Trabajadores(string, string, double, double, double, double);
	string toString()const;
	~Trabajadores();
	double getGanado();
	double getGastado();
	void setGastado(double);
	void setGanado(double);

};