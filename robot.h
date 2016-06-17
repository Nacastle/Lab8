#pragma once
#include <iostream>
#include <string>
using std::string;

class Robot
{
protected:
	string serie;
	string material;
	double amperios;
	double precio;
public:
	Robot(string, string, double, double);
	virtual string toString()const;
	~Robot();
	string getSerie();
	string getMaterial();
	double getAmperios();
	double getPrecio();
	void setSerie(string);
	void setMarterial(string);
	void setAmperios(double);
	void setPrecio(double);
};