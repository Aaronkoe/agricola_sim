#include "AgricolaGame.h"

void AgricolaGame::Draw() {
  board.Draw();
  player.Draw();
}

void AgricolaGame::StepTurn() {
  board.AdvanceState();
}
