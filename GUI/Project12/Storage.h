#pragma once
#ifndef STORAGE_H
#define STORAGE_H

#include "ComputerParts.h"
#include <iostream>
#include <string>
using namespace std;

class Storage :public ComputerParts
{
	//declare the data fields
private:
	string capacity;
	string ppg;
	string type;
	string cache;
	string form;
	string interface;
public:
//declare no-arg constructor and arg constructor
	Storage();
	Storage(const string name, const string price, const string capacity, const string ppg, const string type, const string cache, const string form, const string interface);
	//declare accessor functions for the data fields
	string getCapacity();
	string getPPG();
	string getType();
	string getCache();
	string getForm();
	string getInterface();
	//declare mutator functions for the data fields
	void setCapacity(const string capacity);
	void setPPG(const string ppg);
	void setType(const string type);
	void setCache(const string cache);
	void setForm(const string form);
	void setInterface(const string interface);
	//Declare a display function for the storage object
	void Display();
};
//define the no-arg and argument constructors for Storage
Storage::Storage()
{
	this->capacity = "";
	this->ppg = "";
	this->type = "";
	this->form = "";
	this->interface = "";
}
Storage::Storage(const string name, const string price, const string capacity, const string ppg, const string type, const string cache, const string form, const string interface)
{
	//use set functions to edit the data fields
	setName(name);
	setPrice(price);
	setCapacity(capacity);
	setPPG(ppg);
	setType(type);
	setCache(cache);
	setForm(form);
	setInterface(interface);
}
//define the accessor functions for  the storage object
string Storage::getCapacity()
{
	return capacity;
}
string Storage::getPPG()
{
	return ppg;
}
string Storage::getType()
{
	return type;
}
string Storage::getCache()
{
	return cache;
}
string Storage::getForm()
{
	return form;
}
string Storage::getInterface()
{
	return interface;
}
//define the mutator functions for the Storage object
void Storage::setCapacity(const string capacity)
{
	this->capacity = capacity;
}
void Storage::setPPG(const string ppg)
{
	this->ppg = ppg;
}
void Storage::setType(const string type)
{
	this->type = type;
}
void Storage::setCache(const string cache)
{
	this->cache = cache;
}
void Storage::setForm(const string form)
{
	this->form = form;
}
void Storage::setInterface(const string interface)
{
	this->interface = interface;
}
//define the display function for the display object
void Storage::Display()
{
	cout << name << "  Price:$" << price << "  Capacity:" << capacity << "Gb  Price/Gb:$" << ppg << "  Type: " << type << "  Cache: " << cache << "mb  Form-Factor: " << form << "  Interface: " << interface << endl;
}

#endif