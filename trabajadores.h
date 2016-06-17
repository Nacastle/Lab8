#pragma once
#include "robot.h"
#include <iostream>
#include <string>

class Trabajadores:public Robot{
public:
	Trabajadores(string, string, double, double);
	string toString()const;
	~Trabajadores();
};