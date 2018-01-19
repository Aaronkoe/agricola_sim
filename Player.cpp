#include "Player.h"
#include <iostream>

Player::Player(int food_in) {
  food = food_in;
}

int Player::GetFood() {
  return food;
}

int Player::GetWood() {
  return wood;
}

int Player::GetClay() {
  return clay;
}

int Player::GetReed() {
  return reed;
}

int Player::GetStone() {
  return stone;
}

int Player::GetGrain() {
  return stone;
}

int Player::GetVegetable() {
  return vegetable;
}

int Player::Get(Resource resource) {
  switch (resource) {
    case Resource::Food: return food; break;
    case Resource::Wood: return wood; break;
    case Resource::Clay: return clay; break;
    case Resource::Reed: return reed; break;
    case Resource::Stone: return stone; break;
    case Resource::Grain: return grain; break;
    case Resource::Vegetable: return vegetable; break;
  }
}

void Player::Add(Resource resource, int count = 1) {
  switch (resource) {
    case Resource::Food: food += count; break;
    case Resource::Wood: wood += count; break;
    case Resource::Clay: clay += count; break;
    case Resource::Reed: reed += count; break;
    case Resource::Stone: stone += count; break;
    case Resource::Grain: grain += count; break;
    case Resource::Vegetable: vegetable += count; break;
  }
}

void Player::Draw() {
  std::cout << "Food = " << food << std::endl;
  std::cout << "Wood = " << wood << std::endl;
  std::cout << "Clay = " << clay << std::endl;
  std::cout << "Reed = " << reed << std::endl;
  std::cout << "Stone = " << stone << std::endl;
  std::cout << "Grain = " << grain << std::endl;
  std::cout << "Vegetable = " << vegetable << std::endl;
}

int main() {
  Player p;
  p.Draw();
  p.Add(Player::Resource::Food, 2);
  p.Add(Player::Resource::Wood);
  p.Draw();
  return 0;
}
