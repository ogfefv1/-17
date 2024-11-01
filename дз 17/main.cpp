//
//  main.cpp
//  дз 17
//
//  Created by Егор Джемлиханов on 29.10.2024.
//

#include <iostream>
#include "Aparatnaiachast.hpp"
#include "Componenti.hpp"

using namespace std;

class PC
{
    Cpu cpu;
    SSD ssd;
    RAM ram;

    Klaviatura* klaviatura;
    Mishka* mishka;
    Naushniki* naushniki;
    Monitor* monitor;

public:
    PC(Cpu c, SSD s, RAM r, Klaviatura* kt = nullptr, Mishka* ms = nullptr, Naushniki* ns = nullptr, Monitor* mn = nullptr)
    : cpu(c), ssd(s), ram(r), klaviatura(kt), mishka(ms), naushniki(ns), monitor(mn) {}

    void Output()
    {
        cout << "конфигурация пк" << endl;
        cpu.Output();
        ssd.Output();
        ram.Output();

        if (klaviatura)
        {
            cout << "клавиатура" << endl;
            klaviatura->Output();
        }
        else
            cout << "нет клавиатуры" << endl;

        if (mishka)
        {
            cout << "мышька" << endl;
            mishka->Output();
        }
        else
            cout << "нет мышьки" << endl;

        if (naushniki)
        {
            cout << "наушники" << endl;
            naushniki->Output();
        }
        else
            cout << "нет наушников" << endl;

        if (monitor)
        {
            cout << "монитор" << endl;
            monitor->Output();
        }
        else
            cout << "нет монитора" << endl;
    }
};

int main() {
    Cpu cpu;
    cpu.setZena(300);
    cpu.setEmkost(8);
    cpu.setInia("intel i9");

    SSD ssd;
    ssd.setZena(150);
    ssd.setEmkost(512);
    ssd.setFirma("Kingston");

    RAM ram;
    ram.setZena(80);
    ram.setRazmer(16);
    ram.setVid("DDR4");

    Klaviatura klaviatura;
    klaviatura.setZena(50);
    klaviatura.setMaket("QWERTY");
    klaviatura.setMMehanicheskaia(true);

    Mishka mishka;
    mishka.setZena(30);
    mishka.setDPI(1600);
    mishka.setPProvodnaia(false);

    Naushniki naushniki;
    naushniki.setZena(70);
    naushniki.setPProvodnaia(true);
    naushniki.setVid("накладные наушники");

    Monitor monitor;
    monitor.setZena(200);
    monitor.setRazmer(27);
    monitor.setRzreshenie("1512x982");

    PC myPC(cpu, ssd, ram, &klaviatura, &mishka, &naushniki, nullptr);
    myPC.Output();

    return 0;
}
