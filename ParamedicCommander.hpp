#pragma once
#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic {
    public:
    ParamedicCommander(int playerid):Paramedic(200,playerid){}
    void heal();
    virtual void move(int d);
};