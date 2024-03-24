#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "CPU.h"
#include "Cooler.h"
#include "Motherboard.h"
#include "Ram.h"
#include "Storage.h"
#include "PSU.h"
#include "GPU.h"
#include "Case.h"
using namespace std;

//define vectors
vector<vector<string>>CPUdata;
vector<vector<string>>Coolerdata;
vector<vector<string>>Mobodata;
vector<vector<string>>Ramdata;
vector<vector<string>>Storagedata;
vector<vector<string>>PSUdata;
vector<vector<string>>GPUdata;
vector<vector<string>>Casedata;

// Function to split a string based on a delimiter and store the parts in a vector
vector<string> split(const string& s, char delimiter) {
    vector<string> tokens;
    stringstream ss(s);
    string token;
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

void ReadCPU()
{
    // Open the CSV file
    ifstream cpuf("CPU.csv");

    // Vectors to store data for each column

    string line;
    // Read data line by line
    while (getline(cpuf, line)) {
        // Split the line into tokens based on comma delimiter
        vector<string> tokens = split(line, ',');
        // Store each token into corresponding column vector
        CPUdata.push_back(tokens);
    }
    // Close the file
    cpuf.close();
}

void ReadCooler()
{
    // Open the CSV file
    ifstream coolerf("Cooler.csv");

    // Vectors to store data for each column   
    string line;

    // Read data line by line
    while (getline(coolerf, line)) {
        // Split the line into tokens based on comma delimiter
        vector<string> tokens = split(line, ',');
        // Store each token into corresponding column vector
        Coolerdata.push_back(tokens);
    }
    // Close the file
    coolerf.close();
}

void ReadMobo()
{
    // Open the CSV file
    ifstream mobof("Motherboard.csv");

    // Vectors to store data for each column

    string line;
    // Read data line by line
    while (getline(mobof, line)) {
        // Split the line into tokens based on comma delimiter
        vector<string> tokens = split(line, ',');
        // Store each token into corresponding column vector
        Mobodata.push_back(tokens);
    }
    // Close the file
    mobof.close();
}

void ReadRam()
{
    // Open the CSV file
    ifstream ramf("Ram.csv");

    // Vectors to store data for each column
    string line;
    // Read data line by line
    while (getline(ramf, line)) {
        // Split the line into tokens based on comma delimiter
        vector<string> tokens = split(line, ',');
        // Store each token into corresponding column vector
        Ramdata.push_back(tokens);
    }
    // Close the file
    ramf.close();
}

void ReadStorage()
{
    // Open the CSV file
    ifstream Storagef("HardDrive.csv");

    // Vectors to store data for each column

    string line;
    // Read data line by line
    while (getline(Storagef, line)) {
        // Split the line into tokens based on comma delimiter
        vector<string> tokens = split(line, ',');
        // Store each token into corresponding column vector
        Storagedata.push_back(tokens);
    }
    // Close the file
    Storagef.close();
}

void ReadPSU()
{
    // Open the CSV file
    ifstream PSUf("Power Supply.csv");
    // Vectors to store data for each column

    string line;
    // Read data line by line
    while (getline(PSUf, line)) {
        // Split the line into tokens based on comma delimiter
        vector<string> tokens = split(line, ',');
        // Store each token into corresponding column vector
        PSUdata.push_back(tokens);
    }
    // Close the file
    PSUf.close();
}

void ReadGPU()
{
    // Open the CSV file
    ifstream GPUf("GPU.csv");

    // Vectors to store data for each column

    string line;
    // Read data line by line
    while (getline(GPUf, line)) {
        // Split the line into tokens based on comma delimiter
        vector<string> tokens = split(line, ',');
        // Store each token into corresponding column vector
        GPUdata.push_back(tokens);
    }
    // Close the file
    GPUf.close();
}

void ReadCase()
{
    // Open the CSV file
    ifstream Casef("Case.csv");

    // Vectors to store data for each column

    string line;
    // Read data line by line
    while (getline(Casef, line)) {
        // Split the line into tokens based on comma delimiter
        vector<string> tokens = split(line, ',');
        // Store each token into corresponding column vector
        Casedata.push_back(tokens);
    }
    // Close the file
    Casef.close();
}

int main() {

    ReadCPU();
    ReadCooler();
    ReadMobo();
    ReadRam();
    ReadStorage();
    ReadPSU();
    ReadGPU();
    ReadCase();

    vector<CPU>CPUs;
    vector<Cooler>Coolers;
    vector<Motherboard>Mobo;
    vector<Ram>ram;
    vector<Storage>storage;
    vector<PSU>psus;
    vector<GPU>gpus;
    vector<Case>Cases;



    for (int i = 0; i < CPUdata.size(); i++)
    {
        int j = 0;
        CPU temp(CPUdata[i][j], CPUdata[i][j + 1], CPUdata[i][j + 2], CPUdata[i][j + 3], CPUdata[i][j + 4], CPUdata[i][j + 5]);
        CPUs.push_back(temp);
    }
    for (int i = 0; i < Coolerdata.size(); i++)
    {
        int j = 0;
        Cooler temp(Coolerdata[i][j], Coolerdata[i][j + 1], Coolerdata[i][j + 2], Coolerdata[i][j + 3], Coolerdata[i][j + 4], Coolerdata[i][j + 5], Coolerdata[i][j + 6]);
        Coolers.push_back(temp);
    }
    for (int i = 0; i < Mobodata.size(); i++)
    {      
        int j = 0;
        Motherboard temp(Mobodata[i][j], Mobodata[i][j + 1], Mobodata[i][j + 2], Mobodata[i][j + 3], Mobodata[i][j + 4], Mobodata[i][j + 5], Mobodata[i][j + 6]);
        Mobo.push_back(temp);
    }
    for (int i = 0; i < Ramdata.size(); i++)
    {
        Ram temp(Ramdata[i][0], Ramdata[i][1], Ramdata[i][2], Ramdata[i][3], Ramdata[i][4], Ramdata[i][5], Ramdata[i][6]);
        ram.push_back(temp);
    }
    for (int i = 0; i < Storagedata.size(); i++)
    {
        Storage temp(Storagedata[i][0], Storagedata[i][1], Storagedata[i][2], Storagedata[i][3], Storagedata[i][4], Storagedata[i][5], Storagedata[i][6]);
        storage.push_back(temp);
    }
    for (int i = 0; i < PSUdata.size(); i++)
    {
        PSU temp(PSUdata[i][0], PSUdata[i][1], PSUdata[i][2], PSUdata[i][3], PSUdata[i][4], PSUdata[i][5], PSUdata[i][6]);
        psus.push_back(temp);
    }
    for (int i = 0; i < GPUdata.size(); i++)
    {
        GPU temp(GPUdata[i][0], GPUdata[i][1], GPUdata[i][2], GPUdata[i][3], GPUdata[i][4], GPUdata[i][5], GPUdata[i][6]);
        gpus.push_back(temp);
    }
    for (int i = 0; i < Casedata.size(); i++)
    {
        cout << "i ";     
        Case temp(Casedata[i][0], Casedata[i][1], Casedata[i][2], Casedata[i][3], Casedata[i][4], Casedata[i][5]);
        //Cases.push_back(temp);
    }

    CPUs[0].Display();
    cout << Coolers[0].getColor();
    cout << Mobo[0].getSocket();
    return 0;



}