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
	string speed;
	string capacity;
	string modules;
	string ppg;
	string color;
public:
	Ram();
	Ram(const string name,const string price,const string speed,const string capacity, const string modules, const string ppg, const string color);
	string getSpeed();
	string getCapacity();
	string getModules();
	string getPPG();
	string getColor();

	void setSpeed(const string speed);
	void setCapacity(const string capacity);
	void setModules(const string modules);
	void setPPG(const string ppg);
	void setColor(const string color);
	void Display();
};

Ram::Ram()
{
	this->speed = "";
	this->modules = "";
	this->ppg = "";
	this->color = "";	
}
Ram::Ram(const string name,const string price,const string speed,const string capacity, const string modules, const string ppg, const string color)
{
	setName(name);
	setPrice(price);
	setSpeed(speed);
	setCapacity(capacity);
	setModules(modules);
	setPPG(ppg);
	setColor(color);	
}
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
void Ram::Display()
{
	cout << name << "  Price:$" << price << "  Capacity:" << capacity << "Gb  Modules:" << modules << "Gb  Speed:" << speed << "Mhz  " << "Price/GB:$" << ppg << "  Colour:" << color << endl;
}

#endif