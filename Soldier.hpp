#pragma once
#include "Board.hpp"
namespace Soldiers{
    class Soldier{
        private:
            int health;
            const int inihealth;
            int playerid;
        public:
            Soldier(int playerid,int health):health(health),inihealth(health),playerid(playerid){}
            virtual void move(int)=0;
    };
}