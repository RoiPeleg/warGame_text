#pragma once
#include "FootSoldier.hpp"

//using namespace std;

class FootCommander : public FootSoldier {
    public:
    FootCommander(int playerid) : FootSoldier (playerid,150,20){}
    void shoot();
    virtual void move(std::pair<int, int> d);
};