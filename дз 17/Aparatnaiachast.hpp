//
//  Aparatnaiachast.hpp
//  дз 17
//
//  Created by Егор Джемлиханов on 29.10.2024.
//

#pragma once
#include <iostream>
#include <string>

using namespace std;

class Klaviatura
{
private:
    int zena;
    string maket;
    bool mMehanicheskaia;
public:
    int getZena();
    string getMaket();
    bool getMMehanicheskaia();

    void setZena(int z);
    void setMaket(string m);
    void setMMehanicheskaia(bool m);

    void Output();
};

class Mishka
{
private:
    int zena;
    int dpi;
    bool pProvodnaia;
public:
    int getZena();
    int getDPI();
    bool getPProvodnaia();

    void setZena(int z);
    void setDPI(int d);
    void setPProvodnaia(bool p);

    void Output();
};

class Naushniki
{
private:
    int zena;
    bool pProvodnaia;
    string vid;
public:
    int getZena();
    bool getPProvodnaia();
    string getVid();

    void setZena(int z);
    void setPProvodnaia(bool p);
    void setVid(string v);

    void Output();
};

class Monitor
{
private:
    int zena;
    int razmer;  // in inches
    string rzreshenie;
public:
    int getZena();
    int getRazmer();
    string getRzreshenie();

    void setZena(int z);
    void setRazmer(int r);
    void setRzreshenie(string r);

    void Output();
};

