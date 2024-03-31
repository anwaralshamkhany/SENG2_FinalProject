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
	//declare the data fields for the PSU class
	string size;
	string rating;
	int wattage;
	string modular;
	string color;

public:
	//declare the no-arg and regular constructor for the PSU class
	PSU();
	PSU(const string name, const string price, const string size, const string rating, const string wattage, const string modular, const string color);
	//declare accessor functions for the PSU class
	string getSize();
	string getRating();
	int getWattage();
	string getModular();
	string getColor();
	//declare Mutator functions for the PSU class
	void setSize(const string size);
	void setRating(const string rating);
	void setWattage(const string wattage);
	void setModular(const string modular);
	void setColor(const string color);
};
//define the constructors for the PSU class
PSU::PSU()
{
	this->size = "";
	this->rating = "";
	this->wattage = 0;
	this->modular = "";
	this->color = "";
}
PSU::PSU(const string name, const string price, const string size, const string rating, const string wattage, const string modular, const string color)
{
	//use the set functions to redefine the data fields
	setName(name);
	setPrice(price);
	setSize(size);
	setRating(rating);
	setWattage(wattage);
	setModular(modular);
	setColor(color);
}
//define the Accessor functions for the PSU class
string PSU::getSize()
{
	return size;
}
string PSU::getRating()
{
	return rating;
}
int PSU::getWattage()
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
//define the Mutator functions for the PSU class
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
	this->wattage = stoi(wattage);
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