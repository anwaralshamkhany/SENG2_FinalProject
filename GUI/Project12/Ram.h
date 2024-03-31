
#pragma once
#ifndef RAM_H
#define RAM_H

#include "ComputerParts.h"
#include <iostream>
#include <string>
using namespace std;

class Ram :public ComputerParts
{
private:
	//declare all the data fields
	string speed;
	string capacity;
	string modules;
	string ppg;
	string color;
	bool ddr5;
public:
	//declare a no-arg constructor and regular constructor for Ram
	Ram();
	Ram(const string name, const string price, const string speed, const string capacity, const string modules, const string ppg, const string color, const string DDR5);
	//declare the accessor functions for the Ram class
	string getSpeed();
	string getCapacity();
	string getModules();
	string getPPG();
	string getColor();
	bool getDDR5();
	//declare the mutator functions for the Ram class
	void setSpeed(const string speed);
	void setCapacity(const string capacity);
	void setModules(const string modules);
	void setPPG(const string ppg);
	void setColor(const string color);
	void setDDR5(const string DDR5);
	//declare display function for the Ram class
	void Display();
};

//define the constructor functions
Ram::Ram()
{
	this->speed = "";
	this->capacity = "";
	this->modules = "";
	this->ppg = "";
	this->color = "";
	this->ddr5 = false;
}
Ram::Ram(const string name, const string price, const string speed, const string capacity, const string modules, const string ppg, const string color, const string DDR5)
{
	//use the set functions to redefine the data fields using the set functions
	setName(name);
	setPrice(price);
	setSpeed(speed);
	setCapacity(capacity);
	setModules(modules);
	setPPG(ppg);
	setColor(color);
	setDDR5(DDR5);
}
//define the accessor functions for the ram class
string Ram::getSpeed()
{
	return speed;
}
string Ram::getCapacity()
{
	return capacity;
}
string Ram::getModules()
{
	return modules;
}
string Ram::getPPG()
{
	return ppg;
}
string Ram::getColor()
{
	return color;
}
bool Ram::getDDR5()
{
	return ddr5;
}
//define the mutator functions for the ram class
void Ram::setSpeed(const string speed)
{
	this->speed = speed;
}
void Ram::setCapacity(const string capacity)
{
	this->capacity = capacity;
}
void Ram::setModules(const string modules)
{
	this->modules = modules;
}
void Ram::setPPG(const string ppg)
{
	this->ppg = ppg;
}
void Ram::setColor(const string color)
{
	this->color = color;
}
void Ram::setDDR5(const string DDR5)
{
	//use the stoi function to turn the string DDR5 into a boolean value.
	this->ddr5 = stoi(DDR5);
}
//define the Display function for the Ram class
void Ram::Display()
{
	cout << name << "  Price:$" << price << "  Capacity:" << capacity << "Gb  Modules:" << modules << "Gb  " << (ddr5 ? "DDR5" : "DDR4") << "Speed:" << speed << "Mhz  " << "Price/GB:$" << ppg << "  Colour:" << color << endl;
}

#endif
