#include "Board.hpp"
#include "Soldier.hpp"
#include <string>
#include <vector>
#include <stdexcept>

namespace WarGame {
void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){}
bool Board::has_soldiers(uint player_number) const{
    return false;
}
};