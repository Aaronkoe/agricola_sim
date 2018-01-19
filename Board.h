#pragma once

class Board {
 public:
  enum class BoardState {Setup, InBetweenRound, InRound, Harvest, GameEnd};

 private:
  int round = 0;
  BoardState state = BoardState::Setup;
 public:
  Board();
  int GetRound();
  bool IsGameOver();
  void Draw();
  void AdvanceState();
};
