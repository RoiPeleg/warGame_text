#include "Soldier.hpp"

class Paramedic : public Soldier{
    public:
    Paramedic(int health=100,int playerid):Soldier(health,playerid){}
    virtual void move(int d);
    private:
    void heal();
    
};