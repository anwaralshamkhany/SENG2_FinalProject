#pragma once
#ifndef GPU_H
#define GPU_H
#include "ComputerParts.h"
#include <iostream>
#include <string>
using namespace std;

class GPU :public ComputerParts
{
private:
	string gpu;
	string memory;
	string clockspeed;
	string length;
	string tdp;
public:
	GPU();
	GPU(const string name, const string price, const string gpu,const string memory, const string clockspeed, const string length, const string tdp);
	string getGPU();
	string getMemory();
	string getClockspeed();
	string getLength();
	string getTDP();

	void setGPU(const string gpu);
	void setMemory(const string memory);
	void setClockspeed(const string clockspeed);
	void setLength(const string length);
	void setTDP(const string tdp);
};

GPU::GPU()
{
	this->gpu = "";
	this->clockspeed = "";
	this->length = "";
	this->tdp = "";
}
GPU::GPU(const string name, const string price, const string gpu,const string memory, const string clockspeed, const string length, const string tdp)
{
	setName(name);
	setPrice(price);
	setGPU(gpu);
	setMemory(memory);
	setClockspeed(clockspeed);
	setLength(length);
	setTDP(tdp);
}
string GPU::getGPU()
{
	return gpu;
}
string GPU::getMemory()
{
	return memory;
}
string GPU::getClockspeed()
{
	return clockspeed;
}
string GPU::getLength()
{
	return length;
}
string GPU::getTDP()
{
	return tdp;
}

void GPU::setGPU(const string gpu)
{
	this->gpu = gpu;
}
void GPU::setMemory(const string memory)
{
	this->memory = memory;
}
void GPU::setClockspeed(const string clockspeed)
{
	this->clockspeed = clockspeed;
}
void GPU::setLength(const string length)
{
	this->length = length;
}
void GPU::setTDP(const string tdp)
{
	this->tdp = tdp;
}

#endif