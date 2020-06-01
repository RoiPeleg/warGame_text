#pragma once
#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic {
    public:
    ParamedicCommander(int playerid):Paramedic(playerid,200){}
    void heal();
    virtual void move(std::pair<int,int> d);
};