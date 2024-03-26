#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H
#include <string>
#include "ComputerParts.h"
using namespace std;

class Motherboard :public ComputerParts
{
private:
	string socket;
	string form;
	string chipset;
	bool wifi;
	string color;

public:
	Motherboard();
	Motherboard(const string name, const string price, const string socket, const string form, const string chipset, const string wifi, const string color);
	string getSocket();
	string getForm();
	string getChipset();
	bool getWifi();
	string getColor();
	void setSocket(const string socket);
	void setForm(const string form);
	void setChipset(const string chipset);
	void setWifi(const string wifi);
	void setColor(const string color);
	void Display();
};

Motherboard::Motherboard()
{
	this->name = "";
	this->price = 0;
	this->socket = "";
	this->wifi = false;
	this->color = "";
}
Motherboard::Motherboard(const string name, const string price, const string socket, const string form, const string chipset, const string wifi, const string color)
{
	setName(name);
	setPrice(price);
	setSocket(socket);
	setForm(form);
	setChipset(chipset);
	setWifi(wifi);
	setColor(color);
}
string Motherboard::getSocket()
{
	return socket;
}
string Motherboard::getForm()
{
	return form;
}
string Motherboard::getChipset()
{
	return chipset;
}
bool Motherboard::getWifi()
{
	return wifi;
}
string Motherboard::getColor()
{
	return color;
}
void Motherboard::setSocket(const string socket)
{
	this->socket = socket;
}
void Motherboard::setForm(const string form)
{
	this->form = form;
}
void Motherboard::setChipset(const string chipset)
{
	this->chipset = chipset;
}
void Motherboard::setWifi(const string wifi)
{
	this->wifi = stoi(wifi);
}
void Motherboard::setColor(const string color)
{
	this->color = color;
}
void Motherboard::Display()
{
	cout << name << "  Price:$" << price << "  Socket: " << socket << "  Form-Factor: " << form << "  Socket: " << socket << "  Chipset: " << chipset << "  Wifi: " << (wifi ? "Yes" : "No") << "  Colour: " << color << endl;
}
#endif