#pragma
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
    string socket;
public:
    CPU();
    CPU(const string name, const string price, const string cores, const string clockspeed, const string TDP, const string graphics, const string socket);
    string getCores();
    string getClockspeed();
    int getTDP();
    bool getGraphics();
    string getSocket();
    void setCores(const string cores);
    void setClockspeed(const string clockspeed);
    void setTDP(const string TDP);
    void setGraphics(const string graphics);
    void setSocket(const string socket);
    void Display();
};
CPU::CPU() {
    this->name = "";
    this->cores = "";
    this->clockspeed = "";
    this->TDP = 0;
    this->price = 0;
    this->graphics = false;
}

CPU::CPU(const string name, const string price, const string cores, const string clockspeed, const string TDP, const string graphics, const string socket) {

    setName(name);
    setPrice(price);
    setCores(cores);
    setClockspeed(clockspeed);
    setTDP(TDP);
    setGraphics(graphics);
    setSocket(socket);
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
string CPU::getSocket()
{
    return socket;
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
void CPU::setSocket(const string socket)
{
    this->socket = socket;
}
void CPU::Display()
{
    cout << name << "  Price:$" << price << "  Cores:" << cores << "  Clockspeed:" << clockspeed << "Ghz  Socket:" << socket << "  TDP:" << TDP << "w  Integrated Graphics: " << (graphics ? "Yes" : "No") << endl;
}

#endif  