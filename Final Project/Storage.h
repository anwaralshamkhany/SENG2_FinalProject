#pragma once
#ifndef STORAGE_H
#define STORAGE_H

#include "ComputerParts.h"
#include <iostream>
#include <string>
using namespace std;

class Storage :public ComputerParts
{
private:
	string capacity;
	string ppg;
	string type;
	string form;
	string interface;

public:
	Storage();
	Storage(const string name,const string price,const string capacity, const string ppg, const string type, const string form, const string interface);
	string getCapacity();
	string getPPG();
	string getType();
	string getForm();
	string getInterface();

	void setCapacity(const string capacity);
	void setPPG(const string ppg);
	void setType(const string type);
	void setForm(const string form);
	void setInterface(const string interface);


};
Storage::Storage()
{
	this->capacity = "";
	this->ppg = "";
	this->type = "";
	this->form = "";
	this->interface = "";
}
Storage::Storage(const string name, const string price, const string capacity, const string ppg, const string type, const string form, const string interface)
{
	setName(name);
	setPrice(price);
	setCapacity(capacity);
	setPPG(ppg);
	setType(type);
	setForm(form);
	setInterface(interface);
}
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
string Storage::getForm()
{
	return form;
}
string Storage::getInterface()
{
	return interface;
}

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
void Storage::setForm(const string form)
{
	this->form = form;
}
void Storage::setInterface(const string interface)
{
	this->interface = interface;
}


#endif
