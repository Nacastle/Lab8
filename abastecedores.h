#pragma once
#include "robot.h"
#include "abastecedores.h"
#include <iostream>
#include <string>

class Abastecedores:public Robot{
	double derrochador;
public:
	Abastecedores(string, string, double, double, double, double);
	string toString()const;
	~Abastecedores();
	double getDerrochador();
	void setDerrochador(double);
};