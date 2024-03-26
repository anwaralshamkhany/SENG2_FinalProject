#pragma once
#ifndef CASE_H
#define CASE_H
#include "ComputerParts.h"
#include <iostream>
#include <string>
using namespace std;

class Case :public ComputerParts
{
private:
	string size;
	string color;
	string panel;
	string volume;

public:
	Case();
	Case(const string name, const string price, const string size, const string color, const string panel, const string volume);

	string getSize();
	string getColor();
	string getPanel();
	string getVolume();

	void setSize(const string size);
	void setColor(const string color);
	void setPanel(const string panel);
	void setVolume(const string volume);
	void Display();
};

Case::Case()
{
	this->size = "";
	this->color = "";
	this->panel = "";
	this->volume = "";
}
Case::Case(const string name, const string price, const string size, const string color, const string panel, const string volume)
{
	setName(name);
	setPrice(price);
	setSize(size);
	setColor(color);
	setPanel(panel);
	setVolume(volume);
}

string Case::getSize()
{
	return size;
}
string Case::getColor()
{
	return color;
}
string Case::getPanel()
{
	return panel;
}
string Case::getVolume()
{
	return volume;
}

void Case::setSize(const string size)
{
	this->size = size;
}
void Case::setColor(const string color)
{
	this->color = color;
}
void Case::setPanel(const string panel)
{
	this->panel = panel;
}
void Case::setVolume(const string volume)
{
	this->volume = volume;
}
void Case::Display()
{
	cout << name << "  Price:$" << price << "  Form-Factor:" << size << "  Colour:" << color << "  Side Panel:" << panel << "  Volume:" << volume << "L" << endl;
}


#endif