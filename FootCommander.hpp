#pragma once
#include "FootSoldier.hpp"

class FootCommander : public FootSoilder {
    public:
    FootCommander() : FootSoilder (150,20){}
    void shoot();
}