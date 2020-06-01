#include "Board.hpp"
#include "Soldier.hpp"
#include <string>
#include <vector>
#include <stdexcept>

namespace WarGame {
void Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction){ 
    Soldier* c = this->board.at(source.first).at(source.second);
    std::pair<int,int> target(source.first,source.second);
    if(direction==Up){
        target.first -=1;
    }
    else if (direction==Down)
    {
        target.first +=1;
    }
    else if(direction==Left)
    {
        target.second-=1;
    }
    else{
        target.second+=1;

    }
    Soldier* t = board.at(target.first).at(target.second);
    if(t!=nullptr)throw new std::runtime_error("Already taken");
    if(c==nullptr)throw new std::runtime_error("No soldier at this location");
    if(c->playerId()!=player_number)throw new std::runtime_error("Not your soldier");
    c->move(target);
    board.at(target.first).at(target.second) = c;
    board.at(source.first).at(source.second) = nullptr;
}
bool Board::has_soldiers(uint player_number) const{
    bool r =false;
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board.at(0).size();j++){
            if(board.at(i).at(j)->playerId()==player_number){
                r=true;
                j=board.at(0).size();
                i=board.size();
            }
        }
    }
    return r;
}
};