#pragma once
#include "Soldier.hpp"

class FootSoldier : public Soldiers:: Soldier {
    public:
    FootSoldier(int playerid,int health=100,int damage=10):Soldier(playerid,health){damage=damage;}
    virtual void shoot();
    virtual void move(int d);
    private:
    int damage;
    
};