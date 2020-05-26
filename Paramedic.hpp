#include "Soldier.hpp"

class Paramedic : public Soldier{
    public:
    Paramedic(int health=100):Soldier(health,health){}
    private:
    void heal();

}