#pragma once
#include "Sniper.hpp"

class SniperCommander : public Sniper {
    public:
    SniperCommander(int playerid):Sniper(playerid,120,100){}
    virtual void move(std::pair<int,int> d);
    void shoot();
};