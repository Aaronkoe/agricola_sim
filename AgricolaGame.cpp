#include "AgricolaGame.h"

void AgricolaGame::Play() {
  while (!board.IsGameOver()) {
    StepTurn();
    Draw();
  }
}

void AgricolaGame::Draw() {
  board.Draw();
  player.Draw();
}

void AgricolaGame::StepTurn() {
  board.AdvanceState();
  if (board.IsHarvest()) {
    board.HandleHarvestEating(player);
  }
}
