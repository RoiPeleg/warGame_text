#pragma once
#include "Sniper.hpp"

class SniperCommander : public Sniper {
    public:
    SniperCommander():Sniper(120,100){}
    void shoot();
}