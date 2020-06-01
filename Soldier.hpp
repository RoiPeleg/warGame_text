#pragma once
namespace Soldiers{
    class Soldier{
        private:
            int health;
            const int inihealth;
            int playerid;
        public:
            Soldier(int playerid,int health):health(health),inihealth(health),playerid(playerid){}
            virtual void move(std::pair<int,int> d)=0;
            int playerId(){
                return playerid;
            }
            virtual ~Soldier(){}
    };
}