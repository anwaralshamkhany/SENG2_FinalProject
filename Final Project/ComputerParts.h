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
	double price;

public:
	ComputerParts();
	ComputerParts(const string name, const string price);
	string getName();
	double getPrice();
	void setName(const string name);
	void setPrice(const string price);
	void Display();
};


ComputerParts::ComputerParts()
{
	name = "";
	price = 0;
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

double ComputerParts::getPrice()
{
	return price;
}
void ComputerParts::setName(const string name)
{
	this->name = name;
}
void ComputerParts::setPrice(const string price)
{
	this->price = stoi(price);
}

void ComputerParts::Display()
{
	cout << name << " " << price << endl;
}
#endif