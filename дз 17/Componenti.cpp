//
//  Componenti.cpp
//  дз 17
//
//  Created by Егор Джемлиханов on 29.10.2024.
//

#include "Componenti.hpp"
#include <iostream>

using namespace std;

//cpu
int Cpu::getZena()
{
    cout << zena << endl;
    return zena;
}

int Cpu::getEmkost()
{
    cout << emkost << endl;
    return emkost;
}

string Cpu::getInia()
{
    cout << inia << endl;
    return inia;
}

void Cpu::setZena(int x)
{
    zena = x;
}

void Cpu::setEmkost(int x)
{
    emkost = x;
}

void Cpu::setInia(string x)
{
    inia = x;
}

void Cpu::Output()
{
    getZena();
    getEmkost();
    getInia();
}

//ssd
int SSD::getZena()
{
    cout << zena << endl;
    return zena;
}

int SSD::getEmkost()
{
    cout << emkost << endl;
    return emkost;
}

string SSD::getFirma()
{
    cout << firma << endl;
    return firma;
}

void SSD::setZena(int z)
{
    zena = z;
}

void SSD::setEmkost(int e)
{
    emkost = e;
}

void SSD::setFirma(string f)
{
    firma = f;
}

void SSD::Output()
{
    getZena();
    getEmkost();
    getFirma();
}

//ram
int RAM::getZena()
{
    cout << zena << endl;
    return zena;
}

int RAM::getRazmer()
{
    cout << razmer << endl;
    return razmer;
}

string RAM::getVid()
{
    cout << vid << endl;
    return vid;
}

void RAM::setZena(int z)
{
    zena = z;
}

void RAM::setRazmer(int r)
{
    razmer = r;
}

void RAM::setVid(string v)
{
    vid = v;
}

void RAM::Output()
{
    getZena();
    getRazmer();
    getVid();
}
