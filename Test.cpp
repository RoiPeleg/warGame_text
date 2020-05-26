#include "doctest.h"
#include "DemoGame.hpp"
#include "FootCommander.hpp"
#include "FootSoldier.hpp"

using namespace WarGame;

Board board (10,10);

TEST_CASE("Init row 1"){
    int i;
    for (i=0;i<10;i++){
        board[{0,i}] = new FootSoldier(i);
        CHECK (board[{0,i}]!= nullptr);
    }
}

TEST_CASE("Init row 2"){
    int i;
    for (i=0;i<10;i++){
        board[{1,i}] = new FootSoldier(i+10);
        CHECK (board[{1,i}]!= nullptr);
    }
}

TEST_CASE("Init row 3"){
    int i;
    for (i=0;i<10;i++){
        board[{2,i}] = new FootSoldier(i+20);
        CHECK (board[{2,i}]!= nullptr);
    }
}

TEST_CASE("Init row 4"){
    int i;
    for (i=0;i<10;i++){
        board[{3,i}] = new FootSoldier(i+30);
        CHECK (board[{3,i}]!= nullptr);
    }
}

TEST_CASE("Init row 5"){
    int i;
    for (i=0;i<10;i++){
        board[{4,i}] = new FootSoldier(i+40);
        CHECK (board[{4,i}]!= nullptr);
    }
}

TEST_CASE("Init row 6"){
    int i;
    for (i=0;i<10;i++){
        board[{5,i}] = new FootSoldier(i+50);
        CHECK (board[{5,i}]!= nullptr);
    }
}

TEST_CASE("Init row 7"){
    int i;
    for (i=0;i<10;i++){
        board[{6,i}] = new FootSoldier(i+60);
        CHECK (board[{6,i}]!= nullptr);
    }
}

TEST_CASE("Init row 8"){
    int i;
    for (i=0;i<10;i++){
        board[{7,i}] = new FootSoldier(i+70);
        CHECK (board[{7,i}]!= nullptr);
    }
}

TEST_CASE("Init row 9"){
    int i;
    for (i=0;i<10;i++){
        board[{8,i}] = new FootSoldier(i+80);
        CHECK (board[{8,i}]!= nullptr);
    }
}

TEST_CASE("Init row 10"){
    int i;
    for (i=0;i<10;i++){
        board[{9,i}] = new FootSoldier(i+90);
        CHECK (board[{9,i}]!= nullptr);
    }
}