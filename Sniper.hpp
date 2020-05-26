#pragma once

#include "Soldier.hpp"

class Sniper : public Soldier {
    public:
    Sniper(int playerId,int health=100,int damage=50):Soldier(health,playerId){damage=damage;}
    virtual void shoot();
    private:
    int damage;
};