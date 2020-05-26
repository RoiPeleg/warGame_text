#include "Board.hpp"
#include "Soldier.hpp"
namespace WarGame {
void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){}
bool Board::has_soldiers(uint player_number) const{}
Soldier*& operator[](std::pair<int,int> location){}
Soldier* operator[](std::pair<int,int> location) const{}
};