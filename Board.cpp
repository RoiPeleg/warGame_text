#include "Board.hpp"
#include "Soldier.hpp"
#include <string>
#include <vector>
#include <stdexcept>
#include <iostream>

namespace WarGame {
void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){ 
    Soldier* c = this->board.at(source.first).at(source.second);
    std::pair<int,int> target(source.first,source.second);
    if(direction==Right){
        target.first -=1;
    }
    else if (direction==Left)
    {
        target.first +=1;
    }
    else if(direction==Up)
    {
        target.second-=1;
    }
    else{
        target.second+=1;

    }
    Soldier* t = board.at(target.first).at(target.second);
    if(t!=nullptr)throw  std::runtime_error("Already taken");
    if(c==nullptr)throw  std::runtime_error("No soldier at this location");
    if(c->playerId()!=player_number)throw  std::runtime_error("Not your soldier");
    c->move(target);
    board.at(target.first).at(target.second) = c;
    board.at(source.first).at(source.second) = nullptr;
}
bool Board::has_soldiers(uint player_number) const{
    bool r =false;
    for(int i=0;i<rows-1&&!r; i++){
        for(int j=0;j<cols-1&&!r;j++){
            if(board.at(j).at(i) != nullptr && board.at(j).at(i)->playerId()==player_number){
                r=true;
            }
        }
    }
    return r;
}
};