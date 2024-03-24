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
	string latency;
public:
	Ram();
	Ram(const string name,const string price,const string speed,const string capacity, const string modules, const string ppg, const string color, const string latency);
	string getSpeed();
	string getCapacity();
	string getModules();
	string getPPG();
	string getColor();
	string getLatency();

	void setSpeed(const string speed);
	void setCapacity(const string capacity);
	void setModules(const string modules);
	void setPPG(const string ppg);
	void setColor(const string color);
	void setLatency(const string latency);

};

Ram::Ram()
{
	this->speed = "";
	this->modules = "";
	this->ppg = "";
	this->color = "";
	this->latency = "";
}
Ram::Ram(const string name,const string price,const string speed,const string capacity, const string modules, const string ppg, const string color, const string latency)
{
	setName(name);
	setPrice(price);
	setSpeed(speed);
	setCapacity(capacity);
	setModules(modules);
	setPPG(ppg);
	setColor(color);
	setLatency(latency);
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
string Ram::getLatency()
{
	return latency;
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
void Ram::setLatency(const string latency)
{
	this->latency = latency;
}

#endif