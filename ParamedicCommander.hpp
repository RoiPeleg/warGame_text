#pragma once
#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic {
    public:
    ParamedicCommander():Paramedic(200){}
    void heal();
}