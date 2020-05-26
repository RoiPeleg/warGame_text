#pragma once
#include "Soldier.hpp"

class FootSoilder : public Soldier {
    public:
    FootSoilder(int health=100,int damage=10):Soldier(health,health){damage=damage;}
    virtual void shoot();
    private:
    int damage;
    
}