//
//  Aparatnaiachast.cpp
//  дз 17
//
//  Created by Егор Джемлиханов on 29.10.2024.
//

#include "Aparatnaiachast.hpp"
#include <iostream>

using namespace std;

//клава
int Klaviatura::getZena()
{
    cout << zena << endl;
    return zena;
}

string Klaviatura::getMaket()
{
    cout << maket << endl;
    return maket;
}

bool Klaviatura::getMMehanicheskaia()
{
    cout << (mMehanicheskaia ? "механическая" : "немеханическая") << endl;
    return mMehanicheskaia;
}

void Klaviatura::setZena(int z)
{
    zena = z;
}

void Klaviatura::setMaket(string m)
{
    maket = m;
}

void Klaviatura::setMMehanicheskaia(bool m)
{
    mMehanicheskaia = m;
}

void Klaviatura::Output()
{
    getZena();
    getMaket();
    getMMehanicheskaia();
}

//мышька
int Mishka::getZena()
{
    cout << zena << endl;
    return zena;
}

int Mishka::getDPI()
{
    cout << dpi << endl;
    return dpi;
}

bool Mishka::getPProvodnaia()
{
    cout << (pProvodnaia ? "проводная" : "беспроводная") << endl;
    return pProvodnaia;
}

void Mishka::setZena(int z)
{
    zena = z;
}

void Mishka::setDPI(int d)
{
    dpi = d;
}

void Mishka::setPProvodnaia(bool p)
{
    pProvodnaia = p;
}

void Mishka::Output()
{
    getZena();
    getDPI();
    getPProvodnaia();
}

//наушники
int Naushniki::getZena()
{
    cout << zena << endl;
    return zena;
}

bool Naushniki::getPProvodnaia()
{
    cout << (pProvodnaia ? "проводная" : "беспроводная") << endl;
    return pProvodnaia;
}

string Naushniki::getVid()
{
    cout << vid << endl;
    return vid;
}

void Naushniki::setZena(int z)
{
    zena = z;
}

void Naushniki::setPProvodnaia(bool p)
{
    pProvodnaia = p;
}

void Naushniki::setVid(string v)
{
    vid = v;
}

void Naushniki::Output()
{
    getZena();
    getPProvodnaia();
    getVid();
}

//моник
int Monitor::getZena()
{
    cout << zena << endl;
    return zena;
}

int Monitor::getRazmer()
{
    cout << razmer << endl;
    return razmer;
}

string Monitor::getRzreshenie()
{
    cout << rzreshenie << endl;
    return rzreshenie;
}

void Monitor::setZena(int z)
{
    zena = z;
}

void Monitor::setRazmer(int r)
{
    razmer = r;
}

void Monitor::setRzreshenie(string r)
{
    rzreshenie = r;
}

void Monitor::Output()
{
    getZena();
    getRazmer();
    getRzreshenie();
}
