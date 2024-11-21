CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRC = main.cpp Game.cpp Player.cpp Board.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = flying_chess

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
