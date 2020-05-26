#pragma once
#include "Board.hpp"
    class Solider{
        private:
            int health;
            const int inihealth;
        public:
            Solider(int health):health(health,health){}
            virtual void move(Board::MoveDIR)=0;
    }