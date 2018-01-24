CXX = g++
CXXFLAGS = -Wall -std=c++17

main: main.o AgricolaGame.o Player.o Board.o
	$(CXX) $(CXXFLAGS) -o main main.o AgricolaGame.o Player.o Board.o

main.o: main.cpp AgricolaGame.h
	$(CXX) $(CXXFLAGS) -c main.cpp

AgricolaGame.o: AgricolaGame.cpp AgricolaGame.h
	$(CXX) $(CXXFLAGS) -c AgricolaGame.cpp

Board.o: Board.cpp Board.h
	$(CXX) $(CXXFLAGS) -c Board.cpp

Player.o: Player.cpp Player.h
	$(CXX) $(CXXFLAGS) -c Player.cpp


clean:
	rm *.o main
