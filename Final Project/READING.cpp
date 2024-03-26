#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Computer.h"
#include "CPU.h"
#include "Cooler.h"
#include "Motherboard.h"
#include "Ram.h"
#include "Storage.h"
#include "PSU.h"
#include "GPU.h"
#include "Case.h"
using namespace std;

//define 2d data vectors
vector<vector<string>>CPUdata;
vector<vector<string>>Coolerdata;
vector<vector<string>>Mobodata;
vector<vector<string>>Ramdata;
vector<vector<string>>Storagedata;
vector<vector<string>>PSUdata;
vector<vector<string>>GPUdata;
vector<vector<string>>Casedata;
//define Object vectors
vector<CPU>CPUs;
vector<Cooler>Coolers;
vector<Motherboard>Mobo;
vector<Ram>ram;
vector<Storage>storage;
vector<PSU>psus;
vector<GPU>gpus;
vector<Case>Cases;

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
    if (!cpuf.is_open())
    {
        cout << "opening failed" << endl;
    }
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
    for (unsigned int i = 0; i < CPUdata.size(); i++)
    {        
        CPU temp(CPUdata[i][0], CPUdata[i][1], CPUdata[i][2], CPUdata[i][3], CPUdata[i][4], CPUdata[i][5],CPUdata[i][6]);
        temp.Display();    
        CPUs.push_back(temp);
    }
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
    for (unsigned int i = 0; i < Coolerdata.size(); i++)
    {        
        Cooler temp(Coolerdata[i][0], Coolerdata[i][1], Coolerdata[i][2], Coolerdata[i][3], Coolerdata[i][4], Coolerdata[i][5], Coolerdata[i][6]);
        Coolers.push_back(temp);
    }
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
    for (unsigned int i = 0; i < Mobodata.size(); i++)
    {    
        Motherboard temp(Mobodata[i][0], Mobodata[i][1], Mobodata[i][2], Mobodata[i][3], Mobodata[i][4], Mobodata[i][5], Mobodata[i][6]);
        Mobo.push_back(temp);
    }
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
    for (unsigned int i = 0; i < Ramdata.size(); i++)
    {       
        Ram temp(Ramdata[i][0], Ramdata[i][1], Ramdata[i][2], Ramdata[i][3], Ramdata[i][4], Ramdata[i][5], Ramdata[i][6], Ramdata[i][7]);
        ram.push_back(temp);
    }
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
    for (unsigned int i = 0; i < Storagedata.size(); i++)
    {
        Storage temp(Storagedata[i][0], Storagedata[i][1], Storagedata[i][2], Storagedata[i][3], Storagedata[i][4], Storagedata[i][5], Storagedata[i][6], Storagedata[i][7]);
        storage.push_back(temp);
    }
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
    for (unsigned int i = 0; i < PSUdata.size(); i++)
    {
        PSU temp(PSUdata[i][0], PSUdata[i][1], PSUdata[i][2], PSUdata[i][3], PSUdata[i][4], PSUdata[i][5], PSUdata[i][6]);
        psus.push_back(temp);
    }
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
    for (unsigned int i = 0; i < GPUdata.size(); i++)
    {
        GPU temp(GPUdata[i][0], GPUdata[i][1], GPUdata[i][2], GPUdata[i][3], GPUdata[i][4], GPUdata[i][5], GPUdata[i][6]);
        gpus.push_back(temp);
    }
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
    for (unsigned int i = 0; i < Casedata.size(); i++)
    {
        Case temp(Casedata[i][0], Casedata[i][1], Casedata[i][2], Casedata[i][3], Casedata[i][4], Casedata[i][5]);
        Cases.push_back(temp);
    }
}

void Mainmenu()
{
    cout << "1. Prebuilt Selection" << endl << "2. Custom Selection" << endl << "3. Exit" << endl;
    cout << "Input: ";
}
void Prebuiltmenu()
{
    cout << "Prebuilt Selection" << endl;
    cout << "1. Gaming" << endl << "2. Editing" << endl << "3. Office"<<endl<<"4. Exit"<<endl;
    cout << "1. Gaming" << endl << "2. Editing" << endl << "3. Office" << endl << "4. Exit" << endl;
    cout << "Input: ";
}

int main() 
{
    ReadCPU();
    ReadCooler();
    ReadMobo();
    ReadRam();
    ReadStorage();
    ReadPSU();
    ReadGPU();
    ReadCase();


    Computer c1;
    for (int i = 0; i < 10; i++)
    {
        CPUs[i].Display();
    }
    //c1.setCPU(CPUs[0]);
    //c1.setMobo(Mobo[2]);
    /*
    for (int i = 0; i < 10; i++)
    {
        CPUs[i].Display();
        Coolers[i].Display();
        Mobo[i].Display();
        ram[i].Display();
        storage[i].Display();
        psus[i].Display();
        gpus[i].Display();
        Cases[i].Display();
        cout << endl;
    }
    */
    //c1.setCPU(CPUs[0]);
    //c1.setMobo(Mobo[2]);

    /*
    int menuchoice1=10;
    int menuchoice2 = 10;
    bool sessionactive = true;
    
    while (sessionactive)
    {
        

    while (sessionactive)
    {
        while (!menuchoice1 <= 3 && !menuchoice1 >= 0)
        {
            Mainmenu();
            cin >> menuchoice1;
            if (menuchoice1 == 1 || menuchoice1 == 2 || menuchoice1 == 3)
            {
                break;
            }
            else
            {
                cout << "That is an invalid input Try Again " << endl;
            }
        }
        switch (menuchoice1)
        {
        case 1:
        {
            while (!menuchoice2 <= 4 && !menuchoice2 >= 0)
            {
                Prebuiltmenu();
                cin >> menuchoice2;
                if (menuchoice2 == 1 || menuchoice2 == 2 || menuchoice2 == 3)
                {
                    cout << "Choices" << endl;
                }
                else if (menuchoice2 = 4)
                {
                    menuchoice2 = 10;
                    menuchoice1 = 10;
                    break;        

                    break;

                }
                else
                {
                    cout << "That is an invalid input Try Again " << endl;
                }
            }
            break;
        }
        case 2:
        {
            cout << "Custom Selection" << endl;
            break;
        }
        case 3:
        {
            sessionactive = false;
            break;
        }
        }        
        }
    }
    */
    return 0;
}