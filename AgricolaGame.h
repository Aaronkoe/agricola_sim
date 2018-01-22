#pragma once

#include "Board.h"
#include "Player.h"

class AgricolaGame {
 private:
  Board board;
  Player player;
 public:
  void Draw();
};
