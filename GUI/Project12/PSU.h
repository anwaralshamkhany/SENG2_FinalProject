#pragma once
#pragma once
#ifndef PSU_H
#define PSU_H
#include "ComputerParts.h"
#include <iostream>
#include <string>
using namespace std;

class PSU : public ComputerParts
{
private:
	string size;
	string rating;
	string wattage;
	string modular;
	string color;

public:
	PSU();
	PSU(const string name, const string price, const string size, const string rating, const string wattage, const string modular, const string color);

	string getSize();
	string getRating();
	string getWattage();
	string getModular();
	string getColor();

	void setSize(const string size);
	void setRating(const string rating);
	void setWattage(const string wattage);
	void setModular(const string modular);
	void setColor(const string color);
};

PSU::PSU()
{
	this->size = "";
	this->rating = "";
	this->wattage = "";
	this->modular = "";
	this->color = "";
}
PSU::PSU(const string name, const string price, const string size, const string rating, const string wattage, const string modular, const string color)
{
	setName(name);
	setPrice(price);
	setSize(size);
	setRating(rating);
	setWattage(wattage);
	setModular(modular);
	setColor(color);
}

string PSU::getSize()
{
	return size;
}
string PSU::getRating()
{
	return rating;
}
string PSU::getWattage()
{
	return wattage;
}
string PSU::getModular()
{
	return modular;
}
string PSU::getColor()
{
	return color;
}

void PSU::setSize(const string size)
{
	this->size = size;
}
void PSU::setRating(const string rating)
{
	this->rating = rating;
}
void PSU::setWattage(const string wattage)
{
	this->wattage = wattage;
}
void PSU::setModular(const string modular)
{
	this->modular = modular;
}
void PSU::setColor(const string color)
{
	this->color = color;
}


#endif