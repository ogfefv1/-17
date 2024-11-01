//
//  Componenti.hpp
//  дз 17
//
//  Created by Егор Джемлиханов on 29.10.2024.
//

#pragma once
#include <iostream>

using namespace std;


class Cpu
{
private:
    int zena;
    int emkost;
    string inia;
public:
    int getZena();
    int getEmkost();
    string getInia();

    void setZena(int x);
    void setEmkost(int x);
    void setInia(string x);

    void Output();
};

class SSD
{
private:
    int zena;
    int emkost;
    string firma;
public:
    int getZena();
    int getEmkost();
    string getFirma();

    void setZena(int z);
    void setEmkost(int e);
    void setFirma(string f);

    void Output();
};

class RAM
{
private:
    int zena;
    int razmer;
    string vid;
public:
    int getZena();
    int getRazmer();
    string getVid();

    void setZena(int z);
    void setRazmer(int r);
    void setVid(string v);

    void Output();
};
