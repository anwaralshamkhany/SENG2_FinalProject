#ifndef COMPUTER_H
#define COMPUTER_H
#include "ComputerParts.h"
#include "CPU.h"
#include "Motherboard.h"
#include "Cooler.h"
#include "Ram.h"
#include "Storage.h"
#include "GPU.h"
#include "Case.h"
#include "PSU.h"
class Computer
{
private:
	CPU cpu;
	Motherboard mobo;
	Cooler cooler;
	Ram ram;
	Storage storage;
	GPU gpu;
	Case Case1;
	PSU psu;
public:
	CPU getCPU();
	Motherboard getMobo();
	Cooler getCooler();
	Ram getRam();
	Storage getStorage();
	GPU getGPU();
	Case getCase();
	PSU getPSU();

	void setCPU(const CPU cpu);
	void setMobo(const Motherboard mobo);
	void setCooler(const Cooler cooler);
	void setRam(const Ram ram);
	void setStorage(const Storage storage);
	void setGPU(const GPU gpu);
	void setCase(const Case Case1);
	void setPSU(const PSU psu);
	void Display();
};

CPU Computer::getCPU()
{
	return cpu;
}
Motherboard Computer::getMobo()
{
	return mobo;
}
Cooler Computer::getCooler()
{
	return cooler;
}
Ram Computer::getRam()
{
	return ram;
}
Storage Computer::getStorage()
{
	return storage;
}
GPU Computer::getGPU()
{
	return gpu;
}
Case Computer::getCase()
{
	return Case1;
}
PSU Computer::getPSU()
{
	return psu;
}

void Computer::setCPU(const CPU cpu)
{
	this->cpu = cpu;
}
void Computer::setMobo(const Motherboard mobo)
{
	this->mobo = mobo;
}
void Computer::setCooler(const Cooler cooler)
{
	this->cooler = cooler;
}
void Computer::setRam(const Ram ram)
{
	this->ram = ram;
}
void Computer::setStorage(const Storage storage)
{
	this->storage = storage;
}
void Computer::setGPU(const GPU gpu)
{
	this->gpu = gpu;
}
void Computer::setCase(const Case Case1)
{
	this->Case1 = Case1;
}
void Computer::setPSU(const PSU psu)
{
	this->psu = psu;
}

#endif