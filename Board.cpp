#include "Board.h"
#include <iostream>

Board::Board()
 :
 round(0) {
}

int Board::GetRound() {
  return round;
}

bool Board::IsGameOver() {
  return (state == BoardState::GameEnd);
}

void Board::Draw() {
  std::cout << "Round: " << round << "  State: ";
  switch (state) {
    case BoardState::Setup:          std::cout << "Setup"; break;
    case BoardState::InBetweenRound: std::cout << "InBetweenRound"; break;
    case BoardState::InRound:        std::cout << "InRound"; break;
    case BoardState::Harvest:        std::cout << "Harvest"; break;
    case BoardState::GameEnd:        std::cout << "GameEnd"; break;
  }
  std::cout << std::endl;
}
void Board::AdvanceState() {
  if (state == BoardState::Setup) {
    state = BoardState::InRound;
    round = 1;
  } else if ((round == 4 || round == 7 || round == 9 || round == 11 || round == 13) 
   &&  state == BoardState::InRound) {
    state = BoardState::Harvest;
  } else if (state == BoardState::Harvest) {
    state = BoardState::InBetweenRound;
  } else if (state == BoardState::InBetweenRound) {
    round++;
    state = BoardState::InRound;
  } else if (round == 14 && state == BoardState::InRound) {
    state = BoardState::GameEnd;
  } else {
    state = BoardState::InBetweenRound;
  }
}
