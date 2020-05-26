#pragma once
#include "Soldier.hpp"

class FootSoldier : public Soldier {
    public:
    FootSoldier(int playerid,int health=100,int damage=10):Soldier(health){damage=damage;}
    virtual void shoot();
    virtual void move(int d);
    private:
    int damage;
    
};