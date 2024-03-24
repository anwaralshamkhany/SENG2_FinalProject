#ifndef COOLER_H
#define COOLER_H
#include "ComputerParts.h"
#include <string>
using namespace std;

class Cooler :ComputerParts
{
private:
	string RPM;
	string noise;
	string color;
	bool AIO;
	string size;

public:
	Cooler();
	Cooler(const string name, const string price, const string rpm,const string noise,const string color, const string AIO, const string size);

	string getRPM();
	string getNoise();
	string getColor();
	bool getAIO();
	string getSize();

	void setRPM(const string RPM);
	void setNoise(const string noise);
	void setColor(const string color);
	void setAIO(const string AIO);
	void setSize(const string size);	
};

Cooler::Cooler()
{
	this->name = "";
	this->RPM = "";
	this->noise = "";
	this->color = "";
	this->AIO = false;
	this->size = "";
	this->price = 0;
}
Cooler::Cooler(const string name, const string price, const string RPM,const string noise,const string color, const string AIO, const string size)
{
	setName(name);
	setPrice(price);
	setRPM(RPM);
	setNoise(noise);
	setColor(color);
	setAIO(AIO);
	setSize(size);
}
string Cooler::getRPM()
{
	return RPM;
}
string Cooler::getNoise()
{
	return noise;
}
string Cooler::getColor()
{
	return color;
}
bool Cooler::getAIO()
{
	return AIO;
}
string Cooler::getSize()
{
	return size;
}

void Cooler::setRPM(const string rpm)
{
	this->RPM = rpm;
}
void Cooler::setNoise(const string color)
{
	this->noise = noise;
}
void Cooler::setColor(const string color)
{
	this->color = color;
}
void Cooler::setAIO(const string AIO)
{
	this->AIO = stoi(AIO);
}
void Cooler::setSize(const string size)
{
	this->size = size;
}
#endif 