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
	Case case1;
	PSU psu;
public:


};
#endif