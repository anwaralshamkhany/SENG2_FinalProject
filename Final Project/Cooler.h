#ifndef COOLER_H
#define COOLER_H
#include<string>
using namespace std;

class Cooler
{
private:
	string name;
	int size;
	bool AIO;
	int CAP;
	int price;

public:
	Cooler();
	Cooler(const string name, int size, bool AIO, int CAP, int price);
	string getname();
	int getsize();
	bool getAIO();
	int getCAP();
	int getprice();
};

#endif 