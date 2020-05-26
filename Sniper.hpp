#pragma once

#include "Soldier.hpp"

class Sniper : public Soldiers:: Soldier {
    public:
    Sniper(int playerid,int health=100,int damage=50):Soldier(playerid,health){damage=damage;}
    virtual void shoot();
    virtual void move (int d);
    private:
    int damage;
};