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
	Computer();
	Computer(const CPU cpu, const Motherboard mobo, const Cooler cooler, const Ram ram, const Storage storage, const GPU gpu, const Case Case1, const PSU psu);
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
Computer::Computer()
{
	this->cpu;

}
Computer::Computer(const CPU cpu, const Motherboard mobo, const Cooler cooler, const Ram ram, const Storage storage, const GPU gpu, const Case Case1, const PSU psu)
{


}
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

void Computer::setCPU(CPU cpu)
{
	if (mobo.getSocket() == "")
	{
		this->cpu = cpu;
	}
	if (!(cpu.getSocket() == mobo.getSocket()))
	{
		cout << "This CPU is incompatible with your Motherboard" << endl;
	}	
}
void Computer::setMobo(Motherboard mobo)
{
	if (cpu.getSocket() == "")
	{
		this->mobo = mobo;
	}
	else if (!(cpu.getSocket() == mobo.getSocket()))
	{
		cout << "This Motherboard is incompatible with your CPU" << endl;
	}
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
void Computer::Display()
{
	cpu.Display();
	mobo.Display();
	cooler.Display();
	ram.Display();
	storage.Display();
	gpu.Display();
	psu.Display();
	Case1.Display();
}

#endif