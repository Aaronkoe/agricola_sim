#pragma once

class Player {
 public:
  enum class Resource {Food, Wood, Clay, Reed, Stone, Grain, Vegetable};
 private:
  //Resources
  int food = 0;
  int wood = 0;
  int clay = 0;
  int reed = 0;
  int stone = 0;
  int grain = 0;
  int vegetable = 0;

  //Other
  int beg = 0;
  int people = 2;

 public:
  Player() = default;
  Player(int food_in);
  int GetFood();
  int GetWood();
  int GetClay();
  int GetReed();
  int GetStone();
  int GetGrain();
  int GetVegetable();
  int Get(Resource resource);

  int GetBeg();
  void AddBeg(int count);
  int GetPeople();
  

  void Add(Resource resource, int count);
  void Sub(Resource resource, int count);
  void Draw();
};
