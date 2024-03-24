#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H
#include <string>
using namespace std;

class Motherboard
{
private:
	string name;
	string socket;
	string form;
	string chipset;
	bool wifi;
	int price;
public:
	Motherboard();
	Motherboard(const string name, const string socket, const string form, const string chipset, bool wifi, int price);
	string getname();
	string getsocket();
	string getform();
	string getchipset();
	bool getwifi();
	int getprice();
};

#endif