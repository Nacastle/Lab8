#pragma once
#include "robot.h"
#include <iostream>
#include <string>

class Abastecedores:public Robot{
public:
	Abastecedores(string, string, double, double);
	string toString()const;
	~Abastecedores();
};