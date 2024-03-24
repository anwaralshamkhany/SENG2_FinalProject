#pragma once
#ifndef COMPUTERPARTS_H
#define COMPUTERPARTS_H

#include <string>
#include <iostream>
using namespace std;

class ComputerParts
{
protected:
	string name;
	string price;

public:
	ComputerParts();
	ComputerParts(const string name, const string price);
	string getName();
	string getPrice();
	void setName(const string name);
	void setPrice(const string price);
	void Display();
};


ComputerParts::ComputerParts()
{
	name = "";
	price = "";
}

ComputerParts::ComputerParts(const string name,const string price)
{
	setName(name);
	setPrice(price);
}

string ComputerParts::getName()
{
	return name;
}

string ComputerParts::getPrice()
{
	return price;
}
void ComputerParts::setName(const string name)
{
	this->name = name;
}
void ComputerParts::setPrice(const string price)
{
	this->price = price;
}

void ComputerParts::Display()
{
	cout << name << " " << price << endl;
}
#endif