#ifndef CPU_H
#define CPU_H
#include "ComputerParts.h"
#include <string>
using namespace std;

class CPU : public ComputerParts
{
private:
    string cores;
    string clockspeed;
    int TDP;
    bool graphics;
public:
    CPU();
    CPU(const string name, const string price, const string cores, const string clockspeed, const string TDP, const string graphics);
    string getCores();
    string getClockspeed();
    int getTDP();
    bool getGraphics();
    void setCores(const string cores);
    void setClockspeed(const string clockspeed);
    void setTDP(const string TDP);
    void setGraphics(const string graphics);
    void Display();
};
CPU::CPU() {
    this->name = "";
    this->cores = "";
    this->clockspeed = "";
    this->TDP = 0;
    this->price = 0;
    this->graphics = "";
}

CPU::CPU(const string name, const string price, const string cores, const string clockspeed, const string TDP, const string graphics) {

    setName(name);
    setPrice(price);
    setCores(cores);
    setClockspeed(clockspeed);
    setTDP(TDP);
    setGraphics(graphics);
}

string CPU::getCores() {
    return cores;
}

string CPU::getClockspeed() {
    return clockspeed;
}

int CPU::getTDP() {
    return TDP;
}

bool CPU::getGraphics() {
    return graphics;
}
void CPU::setCores(const string cores)
{
    this->cores = cores;
}

void CPU::setClockspeed(const string clockspeed)
{
    this->clockspeed = clockspeed;
}

void CPU::setTDP(const string TDP)
{
        this->TDP = stoi(TDP);
}
void CPU::setGraphics(const string graphics) 
{

    this->graphics = stoi(graphics);
}

void CPU::Display()
{
    cout << name << " " << price << " " << cores << " " << clockspeed << " " << TDP << " " << graphics << endl;
}

#endif
