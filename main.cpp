#include "Board.h"
#include "Player.h"
#include "AgricolaGame.h"
#include <iostream>
int main() {
  AgricolaGame agame;
  agame.Draw();
  agame.StepTurn();
  agame.Draw();
  return 0;
}
