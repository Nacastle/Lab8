#pragma once
#include "robot.h"
#include "sirviente.h"
#include <iostream>
#include <string>

class Sirviente:public Robot{
	int oxido;
public:
	Sirviente(string, string, double, double, int);
	string toString()const;
	~Sirviente();
	int getOxido();
	void setOxido(int);
};