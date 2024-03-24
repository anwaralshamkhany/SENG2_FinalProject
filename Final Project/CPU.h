#ifndef CPU_H
#define CPU_H
#include <string>
using namespace std;

class CPU
{
private:
	string name;
	int cores;
	int threads;
	int clockspeed;
	string socket;
	int TDP;
	int price;
public:
	CPU();
	CPU(const string name, int cores, int threads, int clockspeed,const string socket,int tdp,int price);
	string getname();
	int getcores();
	int getthreads();
	int getclockspeed();
	string getsocket();
	int getTDP();
	int getprice();
};

#endif