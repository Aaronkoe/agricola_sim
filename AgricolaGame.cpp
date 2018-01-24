#include "AgricolaGame.h"

void AgricolaGame::Play() {
  StepTurn();
  while (!(board.IsGameOver())) {
    Draw();
    StepTurn();
  }
}

void AgricolaGame::Draw() {
  board.Draw();
  player.Draw();
}

void AgricolaGame::StepTurn() {
  board.AdvanceState();
}
