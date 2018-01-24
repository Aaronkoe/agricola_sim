#pragma once
#include "Player.h"

class Board {
 public:
  enum class BoardState {Setup, InBetweenRound, InRound, Harvest, GameEnd};

 private:
  int round = 0;
  BoardState state = BoardState::Setup;
 public:
  Board();
  int GetRound();
  void HandleHarvestEating(Player& player);
  bool IsGameOver();
  void Draw();
  void AdvanceState();
};
