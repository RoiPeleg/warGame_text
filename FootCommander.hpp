#pragma once
#include "FootSoldier.hpp"

class FootCommander : public FootSoldier {
    public:
    FootCommander(int playerid) : FootSoldier (playerid,150,20){}
    void shoot();
    virtual void move(int d);
};