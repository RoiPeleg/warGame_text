#include "Soldier.hpp"
class Paramedic : public Soldiers::Soldier{
    public:
    Paramedic(int playerid,int health=100):Soldier(playerid,health){}
    virtual void move(int d);
    private:
    void heal();
    
};