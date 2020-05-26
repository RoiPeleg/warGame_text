#pragma once

#include "Soldier.hpp"

class Sniper : public Soldier {
    public:
    Sniper(int health=100,int damage=50):Soldier(health,health){damage=damage}
    virtual void shoot();
    private:
    int damage;
}